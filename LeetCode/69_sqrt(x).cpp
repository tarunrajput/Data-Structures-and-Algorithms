#include<bits/stdc++.h>
using namespace std;

int squareRoot(int n) {
    long i=1;
    while(i*i <= n) {
        i++;
    }
    return i-1;
}

int squareRootUsingNewton(int n) {
    long i = n;
    while (i*i > n)
        i = (i + n/i) / 2;
    return i;
}

int main(int argc, char const *argv[])
{
    cout<<squareRoot(10);
    cout<<squareRootUsingNewton(10);
    return 0;
}
