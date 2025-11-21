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
};

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        Student topper;
        int totalMarks = -1;

        for (int j = 0; j < 3; j++)
        {
            Student tmp_stu;
            cin >> tmp_stu.ID >> tmp_stu.name >> tmp_stu.section >> tmp_stu.totalMarks;

            if (totalMarks < tmp_stu.totalMarks)
            {
                topper = tmp_stu;
                totalMarks = tmp_stu.totalMarks;
            }
            else if (topper.totalMarks == tmp_stu.totalMarks)
            {
                if (topper.ID > tmp_stu.ID)
                {
                    topper = tmp_stu;
                }
            }
        }

        cout << topper.ID << " " << topper.name << " " << topper.section << " " << topper.totalMarks << endl;
    }

    return 0;
}