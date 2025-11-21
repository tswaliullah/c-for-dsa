#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;


    while (getline(cin, S)) {

        string cpyStr;


        for (int i = 0; i < S.length(); i++)
        {
            if (S[i] != ' ')
        {
            cpyStr += S[i];
        }
        }
        
        sort(cpyStr.begin(), cpyStr.end());


        cout << cpyStr << endl;
    }

    return 0;
}