#include <iostream>
using namespace std;

int main()
{
    int n;
    for(n=1000;n<=2000;n++){
        if(n%8==0 && n%5==0)
           cout << n << endl;
    }
    return 0;
}

