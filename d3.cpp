#include<iostream>
using namespace std;
class shape 
{
    public:
     virtual void display()
     {
        cout<<"this is a shape"<<endl;

     }

};
class rectangle:public shape
{
    public:
    void display()
    {
        cout<<"this is a rectangle"<<endl;
    }
};
int main ()
{
    rectangle r;
    r.display();
    return 0;

}