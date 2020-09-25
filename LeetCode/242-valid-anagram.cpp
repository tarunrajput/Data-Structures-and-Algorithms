#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
        unordered_map<char,int> umap;
        int slen = s.length(), tlen = t.length();
        if(slen!=tlen)
            return false;
        for(int i=0;i<slen;i++) {
            umap[s[i]]+=1;
            umap[t[i]]-=1;            
        }
        for (auto i : umap) {
            if(i.second!=0)
                return false;
        }
        return true;
}

int main(int argc, char const *argv[])
{
    string s="anagram";
    string t="nagaram";
    cout<<isAnagram(s,t);
    return 0;
}