#include <bits/stdc++.h>
using namespace std;

int main()
{

    // int tt;
    // cin >> tt;

    int A = 0, B = 0, C = 0, D = 0, E = 0, F = 0, G = 0, H = 0, I = 0, J = 0,
        K = 0, L = 0, M = 0, N = 0, O = 0, P = 0, Q = 0, R = 0, S = 0, T = 0,
        U = 0, vV = 0, W = 0, X = 0, Y = 0, Z = 0;

    string ss;
    cin >> ss;

    for (int jj = 0; jj < ss.size(); jj++)
    {

        
        // cout << ss[jj] << endl;
        if (ss[jj] == 0)
        {
            ss[jj] += 2;
        }
        else
        {
            ss[jj]++;
        }
    }
    cout << C << endl;

    int sum = 0;
    for (int jj = 0; jj < ss.size(); jj++)
    {
        if (ss[jj] != 0)
        {
            sum += sum;
        }
    }

    cout << sum;

    return 0;
}
