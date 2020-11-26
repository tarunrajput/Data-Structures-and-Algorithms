#include <bits/stdc++.h>
 
using namespace std;
 
int arr[100005];
int arr2[100005];
 
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    sort(arr, arr+n);
    long total=0;
    for(int lo=0,hi=n-1,k=0;lo<=hi;++lo,--hi){
        arr2[k]=arr[lo];
        k++;
        arr2[k]=arr[hi];
        k++;
    }
    for(int i=0;i<n;i++){
        total+=(long)abs(arr2[i]-arr2[(i+1) % n]);
    }
    printf("%ld\n", total);
    return 0;
}