#include <iostream>
#include <string>

using namespace std;

class NamingClass
{
public:
    NamingClass(string z)
    {
        setName(z);
    }

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
    NamingClass n("\n qwertyui \n");
    cout << n.getName();
    return 0;
}
