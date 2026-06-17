#include<iostream>
using namespace std;
int main()
{
    int i,n,fact=1;
    cout<<"enter the value of n";
    cin>>n;
    for(i=1;i<=n;i++)
    fact=fact*i;
    cout<<"fact is"<<fact;
    return 0;

}
