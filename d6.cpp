#include<iostream>
using namespace std;

class Student
{
private:
    int roll;
    string name;

public:
    void setData(int r, string n)
    {
        roll = r;
        name = n;
    }

    void getData()
    {
        cout << "Roll No = " << roll << endl;
        cout << "Name = " << name << endl;
    }
};

int main()
{
    Student s;

    s.setData(101, "Ayushi");
    s.getData();

    return 0;
}