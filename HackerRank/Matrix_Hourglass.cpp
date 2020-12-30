#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {   
    int matrix[6][6];
    int sum;
    int max = INT_MIN; 
    for(int i=0;i<6;i++)
        for(int j=0;j<6;j++)
            cin>>matrix[i][j];

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            sum=matrix[i][j]+matrix[i][j+1]+matrix[i][j+2]+matrix[i+1][j+1]+matrix[i+2][j]+matrix[i+2][j+1]+matrix[i+2][j+2];
            if(sum>max)
                max=sum;
        }
    }
    
    cout<<max;
    return 0;
}
