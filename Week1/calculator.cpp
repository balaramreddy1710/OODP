#include <iostream>
using namespace std;

int main()
{
    int num1=0,num2=0,choice,add,sub,mul,divi,mod;
    cout << "MENU" << endl;
    cout << "1.Addition" << endl 
         << "2.Subtraction" << endl 
         << "3.Multiplication" << endl 
         << "4.Division" << endl 
         << "5.Modulus" << endl ;
    cout << "Enter your choice of operation";
    cin >> choice;
    cout << "Enter the numbers:";
    cin >> num1 >> num2;
    if(choice==1){
        add=num1+num2;
        cout << "Result:" << add;
    }
    else if(choice==2){
        sub=num1-num2;
        cout << "Result:" << sub;
    }
    else if(choice==3){
        mul=num1*num2;
        cout << "Result:" << mul;
    }
    else if(choice==4){
        divi=num1/num2;
        cout << "Result:" << divi;
    }
    else if(choice==5){
        mod=num1%num2;
        cout << "Result:" << mod;
    }
    else
        cout << "Error!!! Wrong option";
    return 0;
}

