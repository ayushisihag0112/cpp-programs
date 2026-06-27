#include<iostream>
#include<map>
using namespace std;
int main()
{
   int arr[]= {1,1,2,2,3,4,4};
   map<int,int> freq;
   for(int x: arr)
   freq[x]++;
   int ans = -1;
   int mx = 0;
   for(auto x: freq)
   {
    if(x.second>mx)
    {
        mx=x.second;
        ans=x.first;
    }
   } 
   cout<<"most frequent="<<ans;
   return 0;
}