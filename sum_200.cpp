#include <iostream>
using namespace std;
int main()
{
    int num1,num2,sum;
    cout << "Enter the numbers:" << endl;
    cin >> num1 >> num2;
    sum = num1 + num2;
    if(sum>=105 && sum<=200){
        cout << 200;
    }
    else
        cout << sum;
    return 0;
}
