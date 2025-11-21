#include <bits/stdc++.h>
#include <strings.h>
using namespace std;

class Student
{
public:
    int ID;
    char name[101];
    char section[4];
    int totalMarks;

    Student(int ID, char name[101], char section[4], int totalMarks)
    {
        this->ID = ID;
        strcpy(this->name, name);
        strcpy(this->section, section);
        this->totalMarks = totalMarks;
    }
};

int main()
{

    Student s3(3, "Siam", "T", 79);
    Student s1(1, "Atik", "A", 57);
    Student s2(2, "Milon", "B", 85);

    // cout << s1.totalMarks << " " << s2.totalMarks << " " << s3.totalMarks;

    if (s1.totalMarks > s2.totalMarks && s1.totalMarks > s3.totalMarks)
    {
        cout << s1.name;
    }
    else if (s2.totalMarks > s1.totalMarks && s2.totalMarks > s3.totalMarks)
    {
        cout << s2.name;
    }
    else
    {
        cout << s3.name;
    }

    return 0;
}