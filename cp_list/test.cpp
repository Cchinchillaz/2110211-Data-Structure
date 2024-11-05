#include<bits/stdc++.h>
using namespace std;

template <typename T>
class node {
public:
    T data;
    node* next;

    // Default constructor
    node() : data(T()), next(nullptr) {}

    // Parameterized constructor
    node(const T& data, node* next = nullptr) : data(data), next(next) {}
};

int main(){
    node<int> *p = NULL;
    p = new node<int>(10,NULL);
    node<int> *q = new node<int>(20,NULL);
    cout << p->data << " " << q->data << "\n";
    p->next = q;
    q->next = new node<int>(30,NULL);
    p = p->next->next;
    cout << p->data << "\n";
    q = p;
    cout << q->data << "\n";
    q = q->next;
    cout << q->data << "\n";   
}