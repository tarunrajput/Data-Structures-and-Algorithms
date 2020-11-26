#include <bits/stdc++.h>
using namespace std;

string FirstReverse(string str) {
  
  int n=str.length()-1;
  int i=0;
  while(i<n){
    char temp=str[i];
    str[i]=str[n];
    str[n]=temp;
    i++,n--;
  }
  return str;

}

int main(void) { 
   
  // keep this function call here
  cout << FirstReverse("q");
  return 0;
    
}