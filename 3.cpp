#include <iostream>
using namespace std;
int minNum(int i,int j,int k){
    if(i<j && i<k){
        cout << "The minimum number is " << i;
    }
    else if(j<i && j<k){
        cout << "The minimum number is " << j;
    }
    else
        cout << "The minimum number is " << k;
    return 0;
}

int main()
{
    int a,b,c,min;
    cout << "Enter the three numbers:" << endl ;
    cin >> a >> b >>c ;
    min=minNum(a,b,c);
    return 0;
}