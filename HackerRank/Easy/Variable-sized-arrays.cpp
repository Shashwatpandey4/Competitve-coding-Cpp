/*
problem link = https://www.hackerrank.com/challenges/variable-sized-arrays/forum

this problem is solved by using the concept of vectors in c++, you can refer the following link to learn vectors in c++
https://www.dcs.bbk.ac.uk/~roger/cpp/week6.htm
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int no_of_arrays, no_of_queries, size, value, which, index;
    cin >> no_of_arrays >> no_of_queries;
    vector<vector<int>> nvec;
    for (int i = 0; i < no_of_arrays; ++i)
    {
        cin >> size;
        vector<int> ivec;
        for (int j = 0; j < size; ++j)
        {
            cin >> value;
            ivec.push_back(value);
        }
        nvec.push_back(ivec);
    }
    for (int k = 0; k < no_of_queries; ++k)
    {
        cin >> which >> index;
        cout << nvec[which][index] << endl;
    }

    return 0;
}