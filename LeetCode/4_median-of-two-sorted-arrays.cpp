#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> v;
    double res = 0.0;
    int m = nums1.size();
    int n = nums2.size();

    int i = 0, j = 0;

    while (i < m and j < n)
    {
        if (nums1[i] <= nums2[j])
        {
            v.push_back(nums1[i]);
            i++;
        }
        else
        {
            v.push_back(nums2[j]);
            j++;
        }
    }
    while (i < m)
    {
        v.push_back(nums1[i]);
        i++;
    }
    while (j < n)
    {
        v.push_back(nums2[j]);
        j++;
    }
    int mn = v.size();
    if ((mn % 2) == 0)
    {
        res = (v[(mn / 2) - 1] + v[mn / 2]) / 2.0;
    }
    else
    {
        res = v[mn / 2];
    }
    return res;
}