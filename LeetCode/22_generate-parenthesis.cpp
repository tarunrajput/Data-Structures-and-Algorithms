#include <bits/stdc++.h>
using namespace std;

List<String> generateParenthesis(int n)
{
    List<String> combinations = new ArrayList();
    generateAll(new char[2 * n], 0, combinations);
    return combinations;
}

void generateAll(char[] current, int pos, List<String> result)
{
    if (pos == current.length)
    {
        if (valid(current))
            result.add(new String(current));
    }
    else
    {
        current[pos] = '(';
        generateAll(current, pos + 1, result);
        current[pos] = ')';
        generateAll(current, pos + 1, result);
    }
}

boolean valid(char[] current)
{
    int balance = 0;
    for (char c : current)
    {
        if (c == '(')
            balance++;
        else
            balance--;
        if (balance < 0)
            return false;
    }
    return (balance == 0);
}