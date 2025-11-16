#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << min(a, b) << endl;
    cout << max(a, b) << endl;

    cout << min({4, 7, 8, 1, 5, 3}) << endl;
    cout << max({4, 7, 8, 1, 5, 3}) << endl;

    return 0;
}