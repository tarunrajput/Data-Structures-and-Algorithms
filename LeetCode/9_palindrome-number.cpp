#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int num)
{
    long reverse = 0;
    long temp = num;
    int digit = 0;
    while (num > 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    if (reverse == temp)
        return true;
    return false;
}