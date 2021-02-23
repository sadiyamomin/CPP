//WAP

#include <iostream>
using namespace std;

class Account
{
public:
    int accNo;
    double balance;

public:
    void DisplayInfo()
    {
        cout << "account number" << accNo << endl;
        cout << "account balance" << balance << endl;
    }
};

int main()
{
    Account sadiya;
    sadiya.accNo = 101;
    sadiya.balance = 1000001.01;
    sadiya.DisplayInfo();

    Account aiman;
    aiman.accNo = 101;
    aiman.balance = 1000001.01;
    aiman.DisplayInfo();

    return 0;
}