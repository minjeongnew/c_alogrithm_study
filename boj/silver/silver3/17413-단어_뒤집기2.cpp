//
// Created by park on 21. 11. 14..
//
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>

using namespace std;

void print(stack <char>& s) {
    while (! s.empty()) {
        cout << s.top();
        s.pop();
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    bool tag = false;
    getline(cin, str);
    stack <char> s;
    for (auto ch: str) {
        if (ch == '<') {
            print(s);
            tag = true;
            cout << ch;
        }
        else if (ch == '>') {
            tag = false;
            cout << ch;
        }
        else if (ch == ' ') {
            print(s);
            cout << ch;
        }
        else if (tag) {
            cout << ch;
        }
        else {
            s.push(ch);
        }
    }
    print(s);
    cout << '\n';
    return 0;
}
