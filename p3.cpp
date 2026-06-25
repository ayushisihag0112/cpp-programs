#include<iostream>
#include<set>
using namespace std;
int main()
{
    int arr[] = {1,1,2,3,4,4,5,5};
    set<int> s(arr,arr+7);
    cout<<"distinct elements="<<s.size();
    return 0;
}