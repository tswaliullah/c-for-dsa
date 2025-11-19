#include <bits/stdc++.h>
using namespace std;


class Student {

    public:
        char name[100];
        int roll;
        double cgpa;
};

int main()
{
    
    Student pias;
    pias.cgpa = 3.44;
    pias.roll = 23;
    char temp [100] = "Shakib";

    strcpy(pias.name, temp);


    cout << pias.name << " " << pias.roll << " " << pias.cgpa << endl;
    
    return 0;
}