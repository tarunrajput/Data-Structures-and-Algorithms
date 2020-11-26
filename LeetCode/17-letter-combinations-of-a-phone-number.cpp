#include <iostream>
#include <vector>

using namespace std;

string getCode(char digit) {
    string code[] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    return code[digit - '0' - 2];
}

void letterCombinations(string digits, string ans, vector<string> &combinations) {
    if (digits.length() == 0) {
        combinations.push_back(ans);
        return;
    }

    char ch = digits[0];
    string remainingDigits = digits.substr(1);
    string code = getCode(ch);

    for (int i = 0; i < code.length(); i++)
        letterCombinations(remainingDigits, ans + code[i], combinations);
}

vector<string> letterCombinations(string digits) {
    vector<string> combinations;
    
    if (digits.length() > 0)
        letterCombinations(digits, "", combinations);
    return combinations;
}

int main(int argc, char const *argv[])
{
    string digits = "23";
    vector<string> combinations = letterCombinations(digits);
    for(string s : combinations)
        cout<< s << " ";
    return 0;
}
