#include <iostream>
using namespace std;
int main()
{
    int choice, num1=0, num2=0;
    cout << "MENU" << endl
         << "1.Addition" << endl
         << "2.Subtraction" << endl
         << "3.Multiplication" << endl
         << "4.Division" << endl
         << "5.Modulus" << endl
         << "Enter your choice of operation:" << endl;
    cin >> choice;
    cout << "Enter the numbers:" << endl;
    cin >> num1 >> num2;
    cout << "Result: ";
    switch (choice)
    {
    case 1:
        cout << num1 + num2;
        break;
    case 2:
        cout << num1 - num2;
        break;
    case 3:
        cout << num1 * num2;
        break;
    case 4:
        cout << num1 / num2;
        break;
    case 5:
        cout << num1 % num2;
        break;
    default:
        cout << "Invalid Option!!! Try again";
    }
    return 0;
}