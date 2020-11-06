#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    int len = m + n - 1;
    m--, n--;

    while (len >= 0) {
        if (m >= 0 and n >= 0 and nums1[m] > nums2[n]) {
            nums1[len] = nums1[m];
            m--;
        }
        else if (n >= 0) {
            nums1[len] = nums2[n];
            n--;
        }
        len--;
    }
}

int main(int argc, char const *argv[])
{
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    int m = 3, n =3;
    merge(nums1,m,nums2,n);

    for(int i : nums1)
        cout<<i<<" ";
    return 0;
}
