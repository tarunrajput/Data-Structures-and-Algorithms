#include <bits/stdc++.h>
using namespace std;

int MinSwaps(int arr1[], int arr2[], int n) {
    int swaps = 0;
    for(int i=0; i<n; i++) {
        if(arr1[i]!=arr2[i]) {
            int j = i;
            while(arr2[j]!=arr1[i]) {
                j++;
                if(j>=n)
                    return -1;
            }
            swap(arr2[i],arr2[j]);
            swaps++;
        }
    }
    return swaps;
}

int main(int argc, char const *argv[])
{
    int arr1[] = {5, 1, 6, 9, 6};
    int arr2[] = {1, 6, 6, 9, 5};
    cout << MinSwaps(arr1, arr2, 5);
    return 0;
}