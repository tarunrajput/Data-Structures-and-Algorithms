// Implementation of binary search using STL
// It only checks if element is present or not in a array.

#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vec = {1,2,3,3,5};
    if(binary_search(vec.begin(),vec.end(),4))
        cout<<"4 exists in vector\n";
    else
        cout<<"4 doesnt exist\n";

    return 0;
}
