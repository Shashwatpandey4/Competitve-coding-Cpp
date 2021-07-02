/*
problem link =https://www.hackerrank.com/challenges/arrays-introduction/problem?h_r=next-challenge&h_v=zen

an array is a series of elements of the same type placed in contiguous memory locations that can be individually referenced by adding an index to a unique identifier.
*/

#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = N - 1; i >= 0; i--)
    {
        cout << A[i] << " ";
    }
}