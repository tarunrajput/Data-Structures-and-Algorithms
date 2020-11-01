#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    string str;

    for(char c : s){
        if(isalnum(c)) {
            if((c >= 65 and c <= 90))
                c=c+32; // if char is Upper, convert to lower
            str+=c;
        }        
    }

    string rev = str;
    int n = rev.length()-1;
    int i = 0;

    // reverse the string
    while(i < n) {
        swap(rev[i],rev[n]);
        i++,n--;
    }

    if(str==rev)
        return true;
    return false;
}

int main(int argc, char const *argv[])
{
    cout<<isPalindrome("ab_a");
    return 0;
}
