#include<iostream>
using namespace std;
class employee
{
    string name;
    int id;
public:
employee(int i,string n)
{
    id=i;
    name=n;
}
void display()
 {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
    }
};

int main()
{
    employee e(101, "Ayushi Sihag");

    e.display();

    return 0;
}