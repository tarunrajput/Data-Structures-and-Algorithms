#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs) {
    unordered_map<string, vector<string>> umap;

    // sort the string 
    for (string s : strs) {
        string temp = s;
        sort(temp.begin(), temp.end());
        umap[temp].push_back(s);
    }

    vector<vector<string>> anagrams;
    for (auto i : umap)
        anagrams.push_back(i.second);
    return anagrams;
}

int main(int argc, char const *argv[]) {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> grpAnagrams;
    grpAnagrams = groupAnagrams(strs);

    for (auto i : grpAnagrams) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}
