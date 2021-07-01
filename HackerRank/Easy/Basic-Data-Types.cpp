/*

problem link = https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem?h_r=next-challenge&h_v=zen

*/

#include <iostream>
using namespace std;

int main()
{

    int i;
    long l;
    char c;
    float fl;
    double dd;

    scanf("%d %ld %c %f %lf", &i, &l, &c, &fl, &dd);
    printf("%d\n%ld\n%c\n%f\n%lf", i, l, c, fl, dd);

    return 0;
}