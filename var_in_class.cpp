#include <iostream>
#include <string>

using namespace std;

class NamingClass
{
public:
    void setName(string x)
    {
        name = x;
    }
    string getName()
    {
        return name;
    }

private:
    string name;
};

int main()
{
    NamingClass n;
    n.setName("\njohn\n");
    cout << n.getName();
    return 0;
}
