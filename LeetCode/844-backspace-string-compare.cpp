#include<bits/stdc++.h>
using namespace std;

bool backspaceCompare(string S, string T) {
    stack<char> st1;
    stack<char> st2;

    for (char c : S) {
        if (c != '#')
            st1.push(c);
        if (c == '#' and !st1.empty())
            st1.pop();
    }

    for (char c : T) {
        if (c != '#')
            st2.push(c);
        if (c == '#' and !st2.empty())
            st2.pop();
    }

    while (!st1.empty() and !st2.empty() and st1.size() == st2.size()) {
        if (st1.top() == st2.top()) {
            st1.pop();
            st2.pop();
        }
        else
            return false;
    }
    if (st1.empty() and st2.empty())
        return true;
    return false;
}

bool backspaceCompareUsingStack(string S, string T) {
    stack<char> st1, st2;

    for (char c : S) {
        if (c != '#')
            st1.push(c);
        else 
            if (!st1.empty())
                st1.pop();
    }

    for (char c : T) {
        if (c != '#')
            st2.push(c);
        else
            if (!st2.empty())
                st2.pop();
    }
    return st1 == st2;
}

int main(int argc, char const *argv[])
{
    string S = "ab##";
    string T = "c#d#";
    cout<<backspaceCompare(S,T);
    return 0;
}
