#include <iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std;

string LongestWord(string sen) {
  sen+=" ";
  int maxwordlen=0;
  int len = sen.length();
  int count=0;
  string word="";
  string maxword="";
  for(int i=0;i<len;i++) {
    if(!(sen[i]>=65 and sen[i]<=90) and !(sen[i]>=97 and sen[i]<=122) and !(sen[i]>=48 and sen[i]<=57)) {
      if(count>maxwordlen){
        maxwordlen=count;
        maxword=word;
      }
      word="";
      count=0;
    }
    else{
    count++;
    word+=sen[i];
    }
  }
  return maxword;

}

int main(void) { 
   
  // keep this function call here
  cout << LongestWord("a beautiful sentence^&!");
  return 0;
    
}