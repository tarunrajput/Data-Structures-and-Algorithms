//using brute force approach
//time complexity - O(n^2)
//space complexity - O(1)
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(const string& s)
{
    string rev = s;
    reverse(rev.begin(), rev.end());
    return rev==s;
}
string longestPalindrome(string s)
{
    int best_len = 0;
    string longestPalindrome = "";
    int n = s.length();
    for(int L=0; L < n ; L++)
    {
        for (int R = L; R < n; R++)
        {
            int len = R - L + 1;
            string subs = s.substr(L, len);

            if(len > best_len && isPalindrome(subs))
            {
                best_len = len;
                longestPalindrome = subs;
            }
        }
    }
    return longestPalindrome;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    string str;
    cin>>str;
    cout<<longestPalindrome(str);
    printf("\nTIME: %.3lf sec\n", (double)clock()/(CLOCKS_PER_SEC));
}