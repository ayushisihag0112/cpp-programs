#include<iostream>
using namespace std;

class student
{
public:
    int rollno;
    string name;
    float marks;

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    student s;

    s.name = "Ayushi";
    s.rollno = 101;
    s.marks = 92.5;

    s.display();

    return 0;
}