#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    int arrlen = strs.size();
    string prefix = "";
    for(int idx=0; arrlen>0; prefix+=strs[0][idx], idx++)
    for(int i=0; i<arrlen; i++)
        if(idx >= strs[i].size() ||(i > 0 && strs[i][idx] != strs[i-1][idx]))
            return prefix;
    return prefix;
}

int main(int argc, char const *argv[])
{
    vector<string> strs = {"flower","flow","flock"};
    cout<<longestCommonPrefix(strs);
    return 0;
}

