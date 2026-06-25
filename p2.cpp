#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> numbers;
    numbers.insert(10);
    numbers.insert(10);
    numbers.insert(20);
    numbers.insert(20);
    numbers.insert(30);
    cout<<"set elements:";
    for(int x: numbers)
    {
        cout<<x<<" ";
    }
    return 0;
}