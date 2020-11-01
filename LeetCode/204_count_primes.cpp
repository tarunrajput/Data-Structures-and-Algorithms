// * * time complexity : N.Sqrt(N)

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    int i = 2;
    while (i * i <= n)
    {
        if (n % i == 0)
            return false;
        i += 1;
    }
    return true;
}
int countPrimes(int n)
{
    int i = 2;
    int count = 0;
    while (i < n)
    {
        if (isPrime(i))
            count += 1;
        i+=1;
    }
    return count;
}

int countPrimes1(int n) {
    if(n==0 or n==1)
        return 0;
    vector<bool> prime(n, true);
    prime[0] = false, prime[1] = false;
    for (int i = 0; i < sqrt(n); ++i) {
        if (prime[i]) {
            for (int j = i*i; j < n; j += i) {
                prime[j] = false;
            }    
        }    
    }
    return count(prime.begin(), prime.end(), true);
}

int main(int argc, char const *argv[])
{
    cout<<countPrimes(10);
    return 0;
}
