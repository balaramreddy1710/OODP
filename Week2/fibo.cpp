#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int limit, i;
    cout << "Enter the limit: ";
    cin >> limit;
    for (i=0;i<limit;i++)
    {
        cout << fibonacci(i) << " ";
    }
    return 0;
}