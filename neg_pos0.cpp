#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number:" << endl;
    cin >> num ;
    if(num>=0){
        if(num>0)
            cout << "The given number is positive!";
        else
            cout << "It is zero";
    }
    else
        cout << "The given number is negative!";

    return 0;
}