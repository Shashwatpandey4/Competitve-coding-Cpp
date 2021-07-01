/*
problem link = https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem
*/

#include <iostream>
using namespace std;

int main()
{

    int a, b;
    int n = 0;
    string val[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cin >> a >> b;

    if ((a <= 9) && (b <= 9))
    {
        for (n = a; n <= b; n++)
        {
            cout << val[n - 1] << endl;
        }
    }
    else if ((a <= 9) && (b > 9))
    {
        for (n = a; n <= 9; n++)
        {
            cout << val[n - 1] << endl;
        }
        for (n = 10; n <= b; n++)
        {
            if (n % 2 == 0)
            {
                cout << "even" << endl;
            }
            else
            {
                cout << "odd" << endl;
            }
        }
    }

    else
    {
        for (n = a; n <= b; n++)
        {
            if (n % 2 == 0)
            {
                cout << "even" << endl;
            }
            else
            {
                cout << "odd" << endl;
            }
        }
    }
    return 0;
}
