#include<bits/stdc++.h>
using namespace std;

string grade(int input1)
{
    if(input1>=81 && input1<=100)
        return "A";
    else if(input1>=61 && input1<=80)
        return "B";
    else if(input1>=51 && input1<=60)
        return "C";
    else if(input1>=30 && input1<=50)
        return "D";
}
