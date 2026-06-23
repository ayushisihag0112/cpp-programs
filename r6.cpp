#include<iostream>
using namespace std;

int palindrome(string str, int start, int end)
{
    if(start >= end)
        return 1;

    if(str[start] != str[end])
        return 0;

    return palindrome(str, start + 1, end - 1);
}

int main()
{
    string str;
    cin >> str;

    if(palindrome(str, 0, str.length() - 1))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}