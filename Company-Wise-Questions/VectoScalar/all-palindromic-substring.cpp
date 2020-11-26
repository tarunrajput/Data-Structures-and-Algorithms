#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int n = s.length() - 1;
    int i = 0;
    string rev = s;
    while (i < n)
    {
        swap(s[i], s[n]);
        i++;
        n--;
    }
    if (s == rev)
        return true;
    else
        return false;
}

void printPalindromes(string s)
{
    unordered_set<string> palindromesSet;
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            int len1 = j - i + 1;
            string subs = s.substr(i, len1);
            if (isPalindrome(subs) and palindromesSet.find(subs) == palindromesSet.end())
            {
                palindromesSet.insert(subs);
                cout << subs << " ";
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    printPalindromes("google");
    return 0;
}