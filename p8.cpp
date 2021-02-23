//wap to accept the number from the user and finds its square using a function

#include <iostream>
using namespace std;
//fn decl
int findsquare(int n);
int main()
{
    int sqaure, number;
    cout << "enter a number to finds  its square " << endl;
    cin >> number;
    //fn call
    square = findsquare(number);
    cout << "square of the given number is" << square << endl;
    cout << "square of the given number is" << findsquare(number) << endl;
    return 0;
}
//fn def
int findsquare(int n)
{
    return n * n;
}