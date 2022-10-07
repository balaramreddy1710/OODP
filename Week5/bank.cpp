#include <iostream>
using namespace std;

class AddAmount
{
private:
    int amount;

public:
    AddAmount()
    {
        this->amount = 50;
    }

    AddAmount(int amount)
    {
        this->amount = 50 + amount;
    }

    void displayAmount()
    {
        cout << "Amount: " << amount << endl;
    }
};

int main()
{
    AddAmount b1(20), b2;
    cout << "Amount in b1" << endl;
    b1.displayAmount();
    cout << "Amount in b2" << endl;
    b2.displayAmount();
    return 0;
}