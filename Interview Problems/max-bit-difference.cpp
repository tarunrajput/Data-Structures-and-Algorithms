#include<bits/stdc++.h>
using namespace std;

int maxBitDifference(int arr[3][3])
{   
    int max=0,count=0;
    for(int i=0;i<3;i++)
    {   
        count=0;
        for(int j=0;j<i;j++)
        {
            for(int k=0;k<3;k++)
            {
                if(arr[i][k]!=arr[j][k])
                    count+=1;
            }  
            if(count>max)
            {   
                max=count;
                count=0;
            }        
        }
    }
    return max;
}
int main(int argc, char const *argv[])
{
    int array[3][3];
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>array[i][j];
    cout<<endl<<maxBitDifference(array);
    return 0;
}
