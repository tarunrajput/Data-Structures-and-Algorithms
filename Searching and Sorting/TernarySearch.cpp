// Implemenation of Ternary Search having runtime O(Logbase3*N)

#include<bits/stdc++.h>
using namespace std;

int ternarySearch(int arr[], int low,int high, int key)
{
    if(high>=low)
    {
        int mid1 = low + (high - low)/3;
        int mid2 = high - (high -low)/3;
        
        if(key==arr[mid1])
        {
            return mid1;
        }
        if(key == arr[mid2])
        {
            return mid2;
        }
        if(key>arr[mid2])
        {
            return ternarySearch(arr,mid2+1,high,key);
        }
        else if (key<arr[mid1])
        {
            return ternarySearch(arr,low,mid1-1,key);
        }
        else
        {
            return ternarySearch(arr,mid1+1,mid2-1,key);
        }
        

    }
    return -1;
        
}

int main(int argc, char const *argv[])
{
    int arr[] ={1,2,3,4,5,6,7,8,9,10};
    
    int key=7;
    int index = ternarySearch(arr,0,(sizeof(arr)/sizeof(arr[0])-1),key);
    cout<<index<<endl;
    return 0;
}