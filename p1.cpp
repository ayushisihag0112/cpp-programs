#include<iostream>
#include<utility>
using namespace std;
int main()
{
    pair<string,int> student;
    student.first = "ayushi";
    student.second = 25;
    cout<<"student name="<<student.first<<endl;
    cout<<"student rollno="<<student.second<<endl;
    return 0;
}