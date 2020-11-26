#include<bits/stdc++.h>
using namespace std;

void push(vector<int> &v, int element) {
    v.push_back(element);
}

int popelement(vector<int> &v) {
    int n =v.size();
    int ele = v[n-1];    
    v.pop_back();
    return ele;
}
void printElements(vector<int> &v) {
    for(int i:v){
        cout<<i<<" ";
    }
}

int main(int argc, char const *argv[])
{
    vector<int> v;
    push(v,1);
    push(v,2);
    printElements(v);
    cout<<"\n"<<popelement(v)<<" deleted\n";
    printElements(v);

    return 0;
}