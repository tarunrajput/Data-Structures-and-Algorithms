#include<bits/stdc++.h>
using namespace std;

int largestPalindrome(int n) {
	if (n == 1) return 9;
	long long max = pow(10, n) - 1;
	for (int v = max - 1; v>(max / 10); v--) {
		string s = to_string(v), s0 = s;
		reverse(s.begin(), s.end());
		long long u = atoll((s0 + s).c_str());
		for (long long x = max; x*x >= u; x--)
            if (u%x == 0)
                return u;
	}
	return 0;
}

int main(int argc, char const *argv[])
{
    cout<<largestPalindrome(3);
}