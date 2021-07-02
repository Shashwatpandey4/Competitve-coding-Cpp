/*
problem link = https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?h_r=next-challenge&h_v=zen

A pointer in C++ is used to share a memory address among different contexts (primarily functions). They are used whenever a function needs to modify the content of a variable, but it does not have ownership.
*/

#include <iostream>

using namespace std;

void update(int *a, int *b)
{
    int sum = *a + *b;
    int absdiff;
    if (*a > *b)
    {
        absdiff = *a - *b;
    }
    else
    {
        absdiff = *b - *a;
    }
    *a = sum;
    *b = absdiff;
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
