#include <bits/stdc++.h>
using namespace std;

bool compareStrings(string haystack, string needle, int p)
{
    int p2 = 0;
    while (p2 < needle.length())
    {
        if (needle[p2] != haystack[p])
            return false;
        p++;
        p2++;
    }
    return true;
}
int strStr(string haystack, string needle)
{
    int hlen = haystack.length();
    int nlen = needle.length();

    if (nlen > hlen)
        return -1;
    if (nlen == 0 or hlen == 0)
        return 0;
    int p = 0;
    int res = -1;

    while (p <= hlen - nlen)
    {
        if (haystack[p] == needle[0])
            if (compareStrings(haystack, needle, p))
                return p;
        p++;
    }
    return res;
}

int main(int argc, char const *argv[])
{
    string haystack = "aaaaa    ";
    string needle = "bba";
    cout << strStr(haystack, needle); // output 2
    return 0;
}
