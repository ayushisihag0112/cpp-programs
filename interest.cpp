#include<iostream>
using namespace std;
int main()
{
    float si,p,r,t;
    cout<<"enter principle amount";
    cin>>p;
    cout<<"enter rate of interest";
    cin>>r;
    cout<<"enter time";
    cin>>t;
    si=(p*r*t)/100;
    cout<<"simple interest is"<<si<<endl;
    return 0;
}