#include<iostream>
using namespace std;
int main()
{
    int a,A,B,C,D,E,F;
    cout<<"enter the value of a";
    cin>>a;
    if(a>=90)
    cout<<"grade=A";
   else if(a>=80) 
    cout<<"grade=B";
  else if(a>=70) 
    cout<<"grade=C";
    else if(a>=60)
    cout<<"grade=D";
    else if(a>=50)
    cout<<"grade=E";
    else
    cout<<"grade=F";
    return 0;
}