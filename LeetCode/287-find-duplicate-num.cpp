#include <algorithm>
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

// Using Sort
int findDuplicatesUsingSort(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int duplicate = -1;
    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i - 1]) {
            duplicate = nums[i];
            break;
        }
    }
    return duplicate;
}

// Using unordered_set
int findDuplicateUsingSet(vector<int> &nums) {
    unordered_set<int> uset;
    int duplicate = -1;
    for (int i : nums) {
        if (uset.find(i) != uset.end()) {
            duplicate = i;
            break;
        } else
            uset.insert(i);
    }
    return duplicate;
}

// Using Floyd's Cycle Detection
int findDuplicateUsingFloyd(vector<int> &nums) {
    int temp1 = nums[0];
    int temp2 = nums[0];

    do {
        temp1 = nums[temp1];
        temp2 = nums[nums[temp2]];
    } while (temp1 != temp2);

    temp1 = nums[0];
    while (temp1 != temp2) {
        temp1 = nums[temp1];
        temp2 = nums[temp2];
    }
    return temp2;
}

// Using XOR
int findDuplicateUsingXOR(vector<int> &nums) {
    int n = nums.size();

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if ((nums[i] ^ nums[j]) == 0)
                return nums[i];
    return -1;
}

int main(int argc, char const *argv[]) {
    vector<int> nums = {1, 3, 4, 2, 2};
    cout << findDuplicateUsingXOR(nums) << endl;
    cout << findDuplicatesUsingSort(nums) << endl;
    cout << findDuplicateUsingFloyd(nums) << endl;
    cout << findDuplicateUsingSet(nums);
    return 0;
}
