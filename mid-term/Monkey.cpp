#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    char S[100005];
    cin >> S;

    int strLength = strlen(S);

    sort(S, S + strLength);

    cout << S;
    
    return 0;
}