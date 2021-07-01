/*
 problem_link = https://www.hackerrank.com/challenges/cpp-input-and-output/problem

 objective:-
 in this challenge, we practice reading input from stdin and printing output to stdout.


 task
 read 3 numbers from stdin and print their sum to stdout.
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;
    cout << a + b + c << endl;

    return 0;
}