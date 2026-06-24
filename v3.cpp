#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v= {12,45,55,2,3};
    int minelement=v[0];
    for(int i=1;i<v.size();i++)
    {
        if(v[i]<minelement);
        {
            minelement = v[i];
        }

    }
    cout<<"minimum element"<<minelement;
    return 0;
}