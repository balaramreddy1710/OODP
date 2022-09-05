#include<iostream>
using namespace std;  

void swap(int &a, int &b){
        int temp;
        temp=a;
        a=b;
        b=temp;
}
int main()
{
        int a,b;
        cout << "Enter the numbers: ";
        cin >> a >> b;
        cout << "Before swapping"<<"\n A = " << a << "\n B = " << b << endl;
        swap(a,b);
        cout << "After swapping"<<"\n A = "<< a << "\n B = " << b << endl;
        return 0;