#include <iostream>
using namespace std;
int choice;
int long num1, num2, num3;
int main()
{
cout << "WELCOME TO THE CALC\n";
cout << "CHOOSE OPTION: \n"
"\n\n1.ADDITION"
"\n2.SUBTRACTION"
"\n3.MULTIPLICATION"
"\n4.DIVISON"
"\n\nCHOICE: ";
cin >> choice;

while(choice < 1 || choice > 4)
{
cout << "INVALID CHOICE\n";
cout << "CHOICE: \n";
cin >> choice;
}

switch(choice)

//cases
{
case 1:
//Addition
cout << "IMPUT FIRST NUMBER: \n";
cin >> num1;
cout << "PLUS: \n";
cin >> num2;
num1 + num2 == num3;
cout << "YOUR SUM IS: " << num3 << "\n";
break;

}

}
