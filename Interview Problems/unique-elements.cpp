#include<bits/stdc++.h>
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
using namespace std;

void printUniqueElements(int arr[], int n)
{   int i,j;
    fo(i,n)
    {   
        bool isUnique=false;
        fo(j,i)
        {
            if(arr[i]==arr[j])
            {
                isUnique=true;
                break;
            }
        }
        if(!isUnique)
        {
            cout<<arr[i]<<" ";
        }
    }
}
int main(int argc, char const *argv[])
{
    int arr[5]={1,1,1,2,3};
    printUniqueElements(arr,5);
    return 0;
}