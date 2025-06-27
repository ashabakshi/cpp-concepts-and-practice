#include <iostream>
using namespace std;
class Student
{ // student is a new  data type
public:
    string name;
    int rno;
    float gpa;

    Student(string s, int r, float g)
    {
        name = s;
        rno = r;
        gpa = g;
    }
};
int main()
{
    Student s1("Asha Bakshi", 13, 8.4);

    cout << s1.name << " " << s1.gpa << " " << s1.rno << endl;
}