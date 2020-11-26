// STL sort function is implemented using hybrid of QuickSort, HeapSort & InsertionSort.
// By default, it uses QuickSort 
// but if QuickSort is doing unfair partitioning and taking more than N*logN time, it switches to HeapSort 
// and when the array size becomes really small, it switches to InsertionSort.

#include<bits/stdc++.h>
using namespace std;

void increasingSort(vector<int> &v) {
    sort(v.begin(),v.end());
}

void decreasingSort(vector<int> &v) {
    sort(v.begin(),v.end(),greater<int>());
}

void printElements(vector<int> v) {
    for(int i : v)
        cout<<i;
    cout<<"\n";
}
int main(int argc, char const *argv[])
{
    vector<int> v = {1,3,2,5,4};
    increasingSort(v);
    printElements(v);
    decreasingSort(v);
    printElements(v);
    return 0;
}