#include<bits/stdc++.h>
using namespace std;

bool isKthBitSet(int n, int k) {
    return (n & (1 << (k - 1))) ? true : false;
}

int bitCount(int arr[],int n) {
    int bitCount = 0;
    for(int i=0; i<32; i++) {
        int currBitCount = 0;
        for(int j=0;j<n;j++){
            if (isKthBitSet(arr[j],i)) {
                currBitCount++;
            }
        }
        bitCount = max(currBitCount,bitCount);
    }
    return bitCount;
}

int main(int argc, char const *argv[])
{
    int n=0;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++) {
        cin>>arr[i];
    }
    cout<<bitCount(arr,n);
    return 0;
}
