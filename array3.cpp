#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,5,7,9,4};
    int size=5;
    int minElement=arr[0];
    for(int i=1;i<size;i++)
    {
     if(arr[i]< minElement) 
     {
        minElement=arr[i];
     } 
    } 
     cout<<"array elements:";
    for(int i=0;i<size;i++ )
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nMinimum Element="<< minElement;
    return 0; 
    }

