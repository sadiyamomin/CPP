//wap to accept two number from the user and find the greatest

#include <iostream>
using namespace std;
int main()
{
    int n1;
    int n2;
    cout << " enter two numbers" << endl;
    cin >> n1 >> n2;
    cout << "you entered" << n1 << "and" << n2 << endl;
    if (n1 > n2)
    {
        cout << n1 << " is greatest" << endl;
    }
    else
    {
        cout << n2 << "is geatest" << endl;
    }
    return 0;
}