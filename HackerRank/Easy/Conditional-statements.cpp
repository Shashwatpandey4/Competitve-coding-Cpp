/*
problem link = https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

if and else are two of the most frequently used conditionals in C/C++, and they enable you to execute zero or one conditional statement among many such dependent conditional statements.

*/
#include <iostream>
using namespace std;

int main()
{
    int i;

    string val[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    scanf("%d", &i);

    if (i > 9)
    {
        cout << val[0] << endl;
    }
    else
    {
        cout << val[i] << endl;
    }

    return 0;
}