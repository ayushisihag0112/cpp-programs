#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter the value of n";
    cin>>n;
    for(i=2;i*i<=n;i++)
    {
   if(n%i==0)
   cout<<"number is not prime";
   else
   cout<<"number is prime";
   }
   return 0;
}