#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50};
    int size = 5;
    int maxElement= arr[0];
    for(int i=1;i<size;i++)
    {
        if(arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }
    cout<<"array Elements:";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nMaximum Element="<< maxElement;
    return 0;
}