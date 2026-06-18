#include<iostream>
using namespace std;
int max(int a, int b)
{
    if(a>b)
    return a;
    else
    return b;
}
int main()
{
    int c,d;
    cout<<"enter the value of c and d";
    cin>>c>>d;
    cout<<"maximum="<<max(c,d);
    return 0;


}
