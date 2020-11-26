#include<bits/stdc++.h>
using namespace std;

int firstUniqChar(string s) {
        int len = s.length();
        unordered_map<char,int> umap;
        int ans=-1;
        for(int i=0;i<len;i++)
        {
            umap[s[i]]+=1;
        }

        for (int i=0;i<len;i++)
        {
            if(umap.at(s[i])==1)
            {
                ans=i;
                break;
            }
        }
        return ans;
   
}
int main(int argc, char const *argv[])
{
    string str="loveleetcode";
    cout<<firstUniqChar(str);
    return 0;
}