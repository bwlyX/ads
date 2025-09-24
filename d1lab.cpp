#include <bits/stdc++.h>
using namespace std;

bool isBalanced(const string &s) {
    stack<char> st;
    for (char c : s) {
        if (!st.empty() && st.top() == c) {
            st.pop(); // wrap completed
        } else {
            st.push(c);
        }
    }
    return st.empty();
}

int main() {
    string s;
    cin >> s;
    if (isBalanced(s)) cout << "YES\n";
    else cout << "NO\n";
}