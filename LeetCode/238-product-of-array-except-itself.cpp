#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums) {
    int n = nums.size();
    vector<int> product(n);

    product[0] = 1;

    for (int i = 1; i < n; i++)
        product[i] = product[i - 1] * nums[i - 1];

    int R = 1;
    for (int i = n - 1; i >= 0; i--) {
        product[i] *= R;
        R *= nums[i];
    }

    return product;
}

int main(int argc, char const *argv[]) {
    vector<int> nums = {1, 2, 3, 4, 5};
    vector<int> product = productExceptSelf(nums);
    for (int i : product) {
        cout << i << " ";
    }
    return 0;
}
