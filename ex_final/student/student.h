#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>
#include <tuple>

using namespace std;

class DigitalWallet {
private:
    struct Transaction {
        int amount;
        size_t expiration_time;
        bool operator<(const Transaction& other) const {
            return expiration_time < other.expiration_time;
        }
    };

    unordered_map<string, vector<Transaction>> wallet_map;
    long long total_give = 0;
    long long total_spent = 0;
    long long total_expired = 0;

public:
    void add_money(size_t time, const string& person_id, int amount, size_t duration) {
        wallet_map[person_id].push_back({amount, time + duration});
        total_give += amount;
    }

    bool use_money(size_t time, const string& person_id, int amount) {
        if (wallet_map.find(person_id) == wallet_map.end()) {
            return false;
        }

        auto& transactions = wallet_map[person_id];
        sort(transactions.begin(), transactions.end());

        int remaining = amount;
        for (auto it = transactions.begin(); it != transactions.end() && remaining > 0; ) {
            if (it->expiration_time <= time) {
                total_expired += it->amount;
                it = transactions.erase(it);
            } else {
                if (it->amount <= remaining) {
                    remaining -= it->amount;
                    total_spent += it->amount;
                    it = transactions.erase(it);
                } else {
                    it->amount -= remaining;
                    total_spent += remaining;
                    remaining = 0;
                }
            }
        }

        return remaining == 0;
    }

    int current_money(size_t time, const string& person_id) const {
        if (wallet_map.find(person_id) == wallet_map.end()) {
            return 0;
        }

        const auto& transactions = wallet_map.at(person_id);
        int total = 0;
        for (const auto& transaction : transactions) {
            if (transaction.expiration_time > time) {
                total += transaction.amount;
            }
        }

        return total;
    }

    void status(size_t time, long long& total_give, long long& total_spent, long long& total_expired) const {
        total_give = this->total_give;
        total_spent = this->total_spent;
        total_expired = 0;

        for (const auto& [person_id, transactions] : wallet_map) {
            for (const auto& transaction : transactions) {
                if (transaction.expiration_time <= time) {
                    total_expired += transaction.amount;
                }
            }
        }
    }
};
