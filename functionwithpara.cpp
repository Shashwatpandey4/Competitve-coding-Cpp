#include <iostream>

using namespace std;

int adds(int x, int y);

int main()
{
    cout << adds(27, 24);
    return 0;
}

int adds(int x, int y)
{
    int answer = (x + y) * (x + y) * x;
    return answer;
}