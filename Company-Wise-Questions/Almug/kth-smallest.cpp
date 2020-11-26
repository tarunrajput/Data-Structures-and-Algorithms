//refer https://afteracademy.com/blog/kth-smallest-element-in-an-array for help

#include<bits/stdc++.h>
using namespace std;

//O(nlogn) using sorting 
int KthSmallest(int arr[],int n, int k) {
    sort(arr,arr+n);
    return(arr[k-1]);
}

// Using std::nth_element which uses introselect, a fancy version of quicksort
int KthSmallest1(int arr[],int n, int k) {
    nth_element(arr, arr+ k - 1, arr+n);
    return arr[k-1];
}
// Using max heap implemented using priority queue
int KthSmallest2(int arr[],int n, int k) {
    priority_queue<int, vector<int>> pq(arr,arr+k);
    for(int i=k; i<n;i++) {
        if(arr[i]<pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    return pq.top();
}

int main(int argc, char const *argv[])
{
    int arr[] = { 12, 3, 5, 7, 19 }; 
    int k = 2; 
    int n = sizeof(arr)/sizeof(arr[0]);
    cout <<KthSmallest2(arr ,n, k); 
    return 0;
}