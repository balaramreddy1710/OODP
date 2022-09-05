#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n==0 || n==1){
        return 1;}

    return n * factorial(n - 1);
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num >= 0){
        cout << "The factorial of " << num << " is " << factorial(num);
    }
    else{
        cout << "Error! Not possible";
    }
    return 0;
}