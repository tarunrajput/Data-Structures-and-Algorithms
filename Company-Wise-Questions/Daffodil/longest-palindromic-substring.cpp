#include <bits/stdc++.h>
using namespace std;

string longestPalindrome(string s){
    string best_s="";
    int best_len = 0;
    int n = s.length();
    for(int mid = 0; mid < n; mid++){
        for(int x = 0; mid - x >= 0 && mid + x < n; x++){
            if(tolower(s[mid-x]) != tolower(s[mid+x])){
               
                break;
            }
            int len = 2 * x + 1;
            if(len > best_len){
                best_len = len;
                best_s = s.substr(mid - x, len);
            }
        }
    }
    for(int mid = 0; mid < n - 1; mid++){
        for(int x = 1; mid - x + 1 >= 0 && mid + x < n; x++){
            if(tolower(s[mid-x+1]) != tolower(s[mid+x])){
                break;
            }
            int len = 2 * x;
            if(len > best_len){
                best_len = len;
                best_s = s.substr(mid - x + 1, len);
            }
        }
    }
    return best_s;
}

int main(int argc, char const *argv[])
{
    string str;
    getline(cin,str);
    cout<<longestPalindrome(str);
}
