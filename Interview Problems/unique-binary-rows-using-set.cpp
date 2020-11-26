#include<bits/stdc++.h>
using namespace std;

void printUniqueRows(int arr[][5],int rows,int cols)
{
    unordered_set<string> uset;
    for(int i=0;i<rows;i++)
    {   
        string s="";
        //or convert each row to its decimal value
        // unsigned decimal =0;
        for(int j=0;j<cols;j++)
        {
            s+=to_string(arr[i][j]);
            //decimal += arr[i][j] * pow(2,j);
        }
        if(uset.count(s)==0)
        {
            uset.insert(s);
            cout<<s<<endl;
        }
    }

}
int main(int argc, char const *argv[])
{
    int arr[][5] = {{0, 1, 0, 0, 1},  
                    {1, 0, 1, 1, 0},  
                    {0, 1, 0, 0, 1},  
                    {1, 0, 1, 1, 0}};  
      
    printUniqueRows(arr, 4, 5);  
    return 0;
}