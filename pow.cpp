#include<iostream>
using namespace std;
int power( int base, int exp)
{
    int result=1;
    for(int i=1;i<=exp;i++)
    {
    result=result*base;
    }
    return result;
}
    int main()
    {
    int base;
        int exp;
    cout<<"enter the value of base and exp";
    cin>>base>>exp;
    cout<<"result="<<power(base,exp);
    return 0;
    }


