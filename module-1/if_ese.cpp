#include <iostream>

using namespace std;

int main()
{
    int x = 7;

    if (x % 2 == 0)
    {
        cout << "Even";
    }
    else if (x % 2 != 0)
    {
        cout << "Odd";
    }

    return 0;
}