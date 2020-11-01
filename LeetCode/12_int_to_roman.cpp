#include <bits/stdc++.h>
using namespace std;

string romanToInt(int num) {
    string symbol[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string result;

    for (int i = 0; num != 0; i++) {
        while (num >= values[i]) {
            num -= values[i];
            result += symbol[i];
        }
    }
    return result;
}

int main(int argc, char const *argv[])
{
    cout << romanToInt(1994);
    return 0;
}
