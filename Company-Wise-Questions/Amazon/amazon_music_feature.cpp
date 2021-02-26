#include <bits/stdc++.h>
using namespace std;

pair<int, int> fun(int rideDuration, vector<int> songDurations)
{
    rideDuration -=30;
    unordered_map<int, int> map;
    int len = songDurations.size();
    for (int i = 0; i < len; i++)
    {
        int complement = rideDuration - songDurations[i];
        if (map.count(complement))
            return make_pair(map[complement], i);
        map[songDurations[i]] = i;
    }
    return make_pair(-1, -1);
}

int main()
{
    vector<int> v = {1,10,25,35,60};
    pair<int,int> res = fun(90,v);
    cout<<res.first<<res.second;
    return 0;
}
