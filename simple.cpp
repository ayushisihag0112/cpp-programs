#include <iostream>
using namespace std;

int main()
{
 int choice;
float a, b, c;

cout << "1. Addition" << endl;
cout << "2. Subtraction" << endl;
cout << "3. Multiplication" << endl;
 cout << "4. Division" << endl;
cout << "Enter your choice: ";
cin >> choice;
 cout << "Enter two numbers: ";
cin >> a >> b;
switch(choice)
 {
 case 1:
c = a + b;
cout << "Sum = " << c;
break;
 case 2:
 c = a - b;
 cout << "Difference = " << c;
 break;
 case 3:
 c = a * b;
cout << "Multiplication = " << c;
break;
case 4:
 if (b != 0)
{
 c = a / b;
 cout << "Division = " << c;
 }
 else
 {
  cout << "Cannot divide by zero";
 }
 break;
 default:
cout << "Invalid choice";
 }
 return 0;
}