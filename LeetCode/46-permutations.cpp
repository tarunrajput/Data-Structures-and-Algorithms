#include<iostream>
#include<vector>
using namespace std;

// permute num[begin..end]
// invariant: num[0..begin-1] have been fixed/permuted

void permuteRecursive(vector<int> &num, int begin, vector<vector<int>> &permutations) {
    if (begin >= num.size()) {
        permutations.push_back(num);
        return;
    }

    for (int i = begin; i < num.size(); i++) {
        swap(num[begin], num[i]);
        permuteRecursive(num, begin + 1, permutations);
        // reset or bactrack
        swap(num[begin], num[i]);
    }
}

vector<vector<int>> permute(vector<int> &num) {
    vector<vector<int>> permutations;
    permuteRecursive(num, 0, permutations);
    return permutations;
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {1,2,3};
    vector<vector<int>> permutations = permute(nums);
    for(vector<int> v : permutations) {
        for(int i : v) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
