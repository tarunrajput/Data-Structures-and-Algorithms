#include <iostream>

using namespace std;

int numberOfSteps(int num) {
    int count = 0;
    while (num != 0) {
        if (num % 2 == 0)
            num /= 2;
        else
            num -= 1;
        count++;
    }
    return count;
}

int main(int argc, char const *argv[]) {
    cout << numberOfSteps(12342);
    return 0;
}
