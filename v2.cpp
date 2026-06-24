#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v= {12,45,55,2,3};
    int maxelement=v[0];
    for(int i=1;i<v.size();i++)
    {
        if(v[i]>maxelement)
        {
            maxelement = v[i];
        }

    }
    cout<<"maximum element"<<maxelement;
    return 0;
}