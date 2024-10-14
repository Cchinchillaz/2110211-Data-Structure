#include<bits/stdc++.h>
using namespace std;

map<char,int> inpriority = {{'0',0},{'1',0},{'2',0},{'3',0},{'4',0},{'5',0},{'6',0},{'7',0},{'8',0},{'9',0},{'+',3},{'-',3},{'*',5},{'/',5},{'(',-1},{')',1},{'^',7}};
map<char,int> outpriority = {{'+',2},{'-',2},{'*',4},{'/',4},{'(',9},{'^',8}};

string infix_to_postfix(string &infix){
    int n = infix.length();
    string postfix = "";
    stack<char> s;
    for(int i=0;i<n;++i){
        char token = infix[i];
        if(inpriority[token] == 0) postfix += token;
        else{
            int p = outpriority[token];
            while(!s.empty() && inpriority[s.top()] >= p){
                postfix += s.top();
                s.pop();
            }
            if(token == ')') s.pop(); else s.push(token);
        }
    }
    while(!s.empty()){postfix += s.top(); s.pop();}
    return postfix;
}

int main(){
    string infix;
    cin >> infix;
    cout << infix_to_postfix(infix);

}