#include <iostream>
using namespace std;
class Student
{ // student is a new  data type
public:
    string name;
    int rno;
    float gpa;
};
int main()
{
    Student s1;
    s1.name = "Asha Bakshi";
    s1.rno = 13;
    s1.gpa = 8.4;

    Student s2;
    s2.name = "Komal Tiwari";
    s2.rno = 17;
    s2.gpa = 7.4;

    cout << s1.name << " " << s1.gpa << " " << s1.rno << endl;
    cout << s2.name << " " << s2.gpa << " " << s2.rno << endl;
}