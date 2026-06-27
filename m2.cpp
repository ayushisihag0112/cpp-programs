#include<iostream>
#include<map>
using namespace std;
int main()
{
    string str;
    cout<<"enter string";
    getline(cin,str);
    map<char,int> freq;
    for(char ch: str)
    {
       freq[ch]++; 
    }
    cout<<"frequency of characters:\n";
    for(auto x:freq)
    {
         cout<<x.first<<"->"<<x.second<<endl;
    }
    return 0;
}