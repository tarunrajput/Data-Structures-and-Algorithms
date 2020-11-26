#include<bits/stdc++.h>
using namespace std;

bool isValidBRacketPair(string s) {
    stack<char> st;
    for(auto i:s) {
        if(i=='(' or i=='{' or i=='[')
            st.push(i);
        else {
            if(!st.empty() and ( (st.top()=='(' and i==')') or (st.top()=='{' and i=='}') or (st.top()=='[' and i==']') ))
                st.pop();
        }
    }
    return st.empty();
}
int main(int argc, char const *argv[])
{
    string s = "{s(a[b]})";
    cout<<isValidBRacketPair(s);
    return 0;
}