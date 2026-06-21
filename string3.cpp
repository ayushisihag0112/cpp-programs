#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[]="Ayushi";
    char real[10];
    strcpy(real,str);
    strrev(str);
      if(strcmp(real, str) == 0)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
}

