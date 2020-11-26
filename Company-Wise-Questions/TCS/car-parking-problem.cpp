// Car Parking Problem

#include<iostream>
#include<vector>
using namespace std;

string park(string platenum, vector<string>& CPS) {
    if(!(platenum.length()>=6 and platenum.length()<=12))
        return "INVALID INPUT";
    int len = CPS.size();
    CPS.push_back(platenum);
    return "CAR PARKED AT POSITION:"+to_string((len+1));
}

string search(string platenum, vector<string>& CPS) {
    int len = CPS.size();
    if(!(platenum.length()>=6 and platenum.length()<=12))
        return "INVALID INPUT";
    for(int i=0;i<len;i++)
        if(CPS[i]==platenum)
            return "CAR POSITION:"+to_string(i+1);
    return "CAR DOES NOT EXISTS";
}

int main(int argc, char const *argv[]) {
    vector<string> CPS = {"MH04CC2",
                          "MH04C2820",
                          "MH04BB3232",
                          "MH04CC2113",
                          "MH04CC2878",
                          "MH04BB8",
                          "MH04CC2888",
                          "MH04CC1313",
                          "MH04CC2222",
                          "MH04C1201",
                          "MH04CC55",
                          "MH04C6565",
                          "MH04A7"
    };

    int choice = 0;
    cin>>choice;
    string platenum;

    switch (choice) { 
        case 1:  
            cin>>platenum;
            cout<<park(platenum, CPS); 
            break; 
        case 2:  
            cin>>platenum;
            cout<<search(platenum, CPS);
            break; 
        default:  
            cout << "INVALID INPUT"; 
            break;   
    } 
    return 0;
}