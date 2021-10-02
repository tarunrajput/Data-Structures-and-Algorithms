#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    if (s.size() < 2)
        return s.size();
    int maxlen = INT_MIN;
    int left = 0, right = 0;
    unordered_set<char> uset;
    while (right != s.size())
    {
        if (uset.find(s[right]) == uset.end())
        {
            maxlen = max(right - left + 1, maxlen);
            uset.insert(s[right++]);
        }
        else
        {
            uset.erase(s[left++]);
        }
    }
    return maxlen;
}