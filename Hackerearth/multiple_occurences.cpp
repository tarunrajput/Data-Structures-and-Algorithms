#include<iostream>
#include<unordered_set>
#include<map>
#include<iterator>
using namespace std;

int multipleOccurences(int arr[],int n) {
    unordered_set<int> uset;
    multimap<int, int> occurences;
    int sum = 0;

    for(int i=0;i<n;i++) {
        uset.insert(arr[i]);
        occurences.insert(pair <int, int> (arr[i],i+1));
    }

    unordered_set<int>::iterator itr;
    for (itr = uset.begin(); itr != uset.end(); ++itr) {
        multimap <int, int> :: iterator uitr;
        uitr = occurences.upper_bound(*itr);
        --uitr;
        sum += uitr->second - occurences.lower_bound(*itr)->second;		
	}
    return sum;
}

int main(int argc, char const *argv[])
{
    int t = 0;
    cin>>t;
    for(int i=0; i<t; i++) {
        int n = 0;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        cout<<multipleOccurences(arr,n)<<endl;
    }
    return 0;
}
