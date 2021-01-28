#include <bits/stdc++.h>
using namespace std;

bool isValid(string S) {
    stack <char> stack;
    for(int i=0; i<S.length(); i++) {
        if(!stack.empty()){
            if(stack.top() == '(' && S[i] == ')' || stack.top() == '{' && S[i] == '}' || stack.top() == '[' && S[i] == ']') 
                stack.pop();
        }
        else {
            stack.push(S[i]);
        }
    }
    return stack.empty();
}

int main() {
    string S;
    cin>>S;
    isValid(S)? cout<<"String is valid\n" : cout<<"String is invalid\n";
    return 0;
}