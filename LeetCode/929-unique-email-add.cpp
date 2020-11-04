#include<bits/stdc++.h>
using namespace std;

int numUniqueEmails(vector<string>& emails) {
    unordered_set<string> emailsSet;

    for(string email : emails) {
        string addr = "";
        int i = 0;
        int len = email.length();
        while(i<len and email[i] != '+' and email[i] != '@') {
            if(email[i] != '.')
                addr+=email[i];
            i++;
        }
        while(email[i] != '@') {
            i++;
        }
        while(i<len) {
            addr+=email[i];
            i++;
        }
        emailsSet.insert(addr);
    }
    return emailsSet.size();
}

int main(int argc, char const *argv[])
{
    vector<string> emails = {"test.email+alex@leetcode.com",
                             "test.e.mail+bob.cathy@leetcode.com", 
                             "testemail+david@lee.tcode.com", 
                             "test@leetcode.com"};

    cout<<numUniqueEmails(emails);
    return 0;
}
