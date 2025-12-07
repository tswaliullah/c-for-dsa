#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        double result = (double)n / 4;

        cout << ceil(result) << endl;
    }

    return 0;
}