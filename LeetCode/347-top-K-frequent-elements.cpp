#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
using namespace std;

vector<int> topKFrequent(vector<int> &nums, int k) {
    vector<int> v;
    unordered_map<int, int> numsmap;

    for (int i : nums) {
        numsmap[i]++;
    }

    multimap<int, int, greater<int>> multiMap;

    for (auto it = numsmap.begin(); it != numsmap.end(); it++)
        multiMap.insert(make_pair(it->second, it->first));

    multimap<int,int,greater<int>>::iterator iter = multiMap.begin();

    while(k) {
        v.push_back(iter->second);
        iter++;
        k--;
    }

    return v;
}

int main(int argc, char const *argv[]) {
    vector<int> nums = {1,1,1,2,2,3};
    vector<int> topKElements = topKFrequent(nums,2);
    for(int i : topKElements)
        cout<<i<<" ";
    return 0;
}
