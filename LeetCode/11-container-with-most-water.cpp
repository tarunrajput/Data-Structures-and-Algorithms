#include <iostream>
#include <vector>
using namespace std;

// Brute Force Approach
// TC: O(n^2)
// Will result in TLE for large inputs
int maxArea(vector<int> &height) {
    int maxArea = 0;
    int area = 0;
    int n = height.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            area = min(height[i], height[j]) * (j - i);
            if (area > maxArea) {
                maxArea = area;
                area = 0;
            }
        }
    }
    return maxArea;
}

// Using Two Pointers
// TC: O(n)

int maxAreaUsingTwoPtrs(vector<int> &height) {
    int maxArea = 0, l = 0, r = height.size() - 1;
    while (l < r) {
        maxArea = max(min(height[l], height[r]) * (r - l), maxArea);
        if (height[l] < height[r])
            l++;
        else
            r--;
    }
    return maxArea;
}

int main(int argc, char const *argv[]) {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(height);
    return 0;
}
