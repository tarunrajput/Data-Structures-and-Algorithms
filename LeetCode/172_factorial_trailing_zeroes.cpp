#include<bits/stdc++.h>
using namespace std;

int trailingZeroes(int n) {
    int trailingZeroes = 0;

    for (int i = 5; i <= n; i += 5) {
        int j = i;
        while (j / 5 > 0 and j % 5 == 0) {
            trailingZeroes += 1;
            j = j / 5;
        }
    }
    return trailingZeroes;
}

int main(int argc, char const *argv[])
{
    cout<<trailingZeroes(125);
    return 0;
}
