/*
problem link = https://www.hackerrank.com/challenges/c-tutorial-functions/problem

functions are a bunch of statements glued together. A function is provided with zero or more arguments, and it executes the statements on it. based on the return type, it either returns nothing (void) or something.
*/
#include <iostream>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int ans;
    if (a > b && a > c && a > d)
        ans = a;
    else if (b > c && b > d)
        ans = b;
    else if (c > d)
        ans = c;
    else
        ans = d;
    return ans;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    cout << max_of_four(a, b, c, d) << endl;

    return 0;
}