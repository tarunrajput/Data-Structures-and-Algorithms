// will result in TLE for large size array
#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        int count=0;
        int i=0;
        int j=1;
        while(i<len-1 && j<len){
            if(nums[i]==0 && nums[j]==0){
                count+=1;
                i+=1;
                j+=1;
            }
            else if(nums[i]==0 && nums[j]!=0){
                swap(nums[i],nums[j]);
                if(count!=0){
                    i=i-count;
                    j=j-count;
                    count=0;
                }
            }
            else{
                i=i+1;
                j=j+1;
            }
        }        
}

int main(int argc, char const *argv[])
{
    vector<int> v={0,1,0,3,4};
    moveZeroes(v);
    for(int i:v){
        cout<<i;
    }
    return 0;
}