#include<bits/stdc++.h>
using namespace std;

void findUniqueRows(int arr[3][3])
{
    for(int i=0;i<3;i++)
    {
        int flag=0;
        for(int j=0;j<i;j++)
        {
            flag=1;
            for(int k=0;k<3;k++)
            {
                if(arr[i][k]!=arr[j][k])
                    flag=0;
            }
            if(flag==1)
                break;                
        }
        if(flag==0)
        {   
            for(int j=0; j<3; j++) 
            cout<<arr[i][j]<<" "; 
            cout<<endl; 
        } 
    }
}
int main(int argc, char const *argv[])
{
    int array[3][3];
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>array[i][j];
    findUniqueRows(array);
    return 0;
}
