#include<iostream>
#include<map>
using namespace std;
int main()
{
    int arr[]={1,1,2,2,3,3,3};
    map<int,int> freq;
    for(int x: arr)
    freq[x]++;
    cout<<freq[2]<<endl;
    cout<<freq[3];
    return 0;
}