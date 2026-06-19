#include<iostream>
using namespace std;

int main()
{
    int arr[5]={4,6,2,7,3};
    int size=5;

    int max=arr[0];
    for(int i=1;i<size;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }

    int secondmax=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>secondmax && arr[i]<max)
            secondmax=arr[i];
    }

    cout<<"Second Maximum Element = "<<secondmax;

    return 0;
}