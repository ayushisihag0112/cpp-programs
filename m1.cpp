#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int arr[n];
    map<int,int> freq;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        freq[arr[i]]++;
    }
    cout<<"frequency of elements:\n";
    for(auto x : freq)
    {
        cout<<x.first<<"->"<<x.second<<endl;
    }
    return 0;
}