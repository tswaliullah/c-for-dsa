#include <iostream>
using namespace std;


int main(){

    int x;
    char s[1001];

    cin >> x;
    cin.ignore();
    cin.getline(s, 1001);

    cout << x << endl << s;


    return 0;
}