#include<iostream>
using namespace std;

class Box
{
public:
    int length;

    void setLength(int length)
    {
        this->length = length;
    }

    void display()
    {
        cout << "Length = " << length;
    }
};

int main()
{
    Box b;

    b.setLength(20);

    b.display();

    return 0;
}