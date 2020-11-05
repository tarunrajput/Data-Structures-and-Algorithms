#include<iostream>
using namespace std;

int titleToNumber(string s) {
    long value = 0;

    for (char c : s)
        value = 26 * value + c - 64;
    return value;
}

int main(int argc, char const *argv[])
{
    cout<<titleToNumber("ZY");
    return 0;
}
