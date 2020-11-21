#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

string largestNumber(vector<int> &values) {
    string largestNum = "";

    // custom sort using lambda expression
    sort(values.begin(), values.end(), [](const int &lhs, const int &rhs) {
        string lhsstr = to_string(lhs);
        string rhsstr = to_string(rhs);
        return (rhsstr + lhsstr) < (lhsstr + rhsstr);
    });

    if (values[0] == 0)
        return "0";

    for (int i : values)
        largestNum += to_string(i);

    return largestNum;
}

int main(int argc, char const *argv[]) {
    vector<int> values = {3,30,34,5,9};
    cout<<largestNumber(values);
    return 0;
}
