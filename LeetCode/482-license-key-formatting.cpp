#include<bits/stdc++.h>
using namespace std;

string licenseKeyFormatting(string license, int k) {
    string temp, formattedLicense;
    int len,m;
    int c=0,i=0;  

    for(char c : license)
        if(isalnum(c))
            temp+=toupper(c);

    len = temp.length();

    if(len==1)
        return temp;

    m = len % k;
    
    while(i < m) {
        formattedLicense+=temp[i];
        i++;
    }

    if(m > 0)
        formattedLicense+='-';
    
    while(i<len) {
        if(c==k) {
            formattedLicense+='-';
            c=0;
        }
        else {
            formattedLicense+=temp[i];
            c++;
            i++;
        }
    }
    return formattedLicense;
}

int main(int argc, char const *argv[])
{
    int k = 4;
    string license = "5f3z-2e-9-w";

    cout<<licenseKeyFormatting(license, k);
    return 0;
}
