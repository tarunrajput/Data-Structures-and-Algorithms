#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s)
{
    unordered_map<char, int> symbolMap;
    symbolMap['I'] = 1;
    symbolMap['V'] = 5;
    symbolMap['X'] = 10;
    symbolMap['L'] = 50;
    symbolMap['C'] = 100;
    symbolMap['D'] = 500;
    symbolMap['M'] = 1000;

    int num = 0;
    int length = s.length();
    for (int i = 0; i < length; i++)
    {
        if (symbolMap[s[i]] < symbolMap[s[i + 1]])
        {
            num += symbolMap[s[i + 1]] - symbolMap[s[i]];
            i += 1;
        }
        else
        {
            num += symbolMap[s[i]];
        }
    }
    return num;
}
int main(int argc, char const *argv[])
{
    cout << romanToInt("III");
    return 0;
}
