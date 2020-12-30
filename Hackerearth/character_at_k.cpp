#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[]) {
    int n = 0, q = 0;
    cin>>n;
    string strarr[n];

    for(int i = 0;i<n;i++) {
        cin>>strarr[i];
    }

    cin>>q;

    while(q) {
        int l = 0,r=0,x=0;
        cin>>l>>r>>x;
        l--,r--,x--;

        string grpString = "";

        for(int j = l; j<=r;j++) {
            grpString += strarr[j];
        }
        sort(grpString.begin(), grpString.end());
        cout<<grpString[x]<<endl;
        q--;
    }
    return 0;
}
