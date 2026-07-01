#include<iostream>
using namespace std;
class calculator
{
    public:
    
        int add(int a,int b)
        {
        return a+b;
        }
    float add(float a, float b)
    {
    return a+b;
    }
};
int main()
{
    calculator c;
    cout<<"the sum of two integers:"<<c.add(2,3)<<endl;
    cout<<"the sum of two floats:"<<c.add(2.3f,3.2f)<<endl;
    return 0;
}