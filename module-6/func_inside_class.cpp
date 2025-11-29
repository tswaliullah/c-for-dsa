#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    Student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }

    void hello()
    {
        cout << "Hello " << name << endl;
    }
};

int main()
{

    Student sakib("Shakib Ahmed", 23);
    Student jim("Jim", 11);

    // cout << sakib.name << endl;


    sakib.hello(); 
    jim.hello();

    return 0;
}