#include<iostream>
using namespace std;
int prime(int n)
{
    if(n<=1)
    return false;
for(int i=2;i<n;i++)
{
if(n%i==0)
return false;
}
return true;
}
int main()
{
    int n;
cout<<"enter the value of n";
cin>>n;
if(prime(n))
cout<<"true";
else
cout<<"false";
return 0;
}







