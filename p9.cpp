//wap of function overloaded
#include <iostream>
using namespace std;
void display(int n1)
{
    cout << "you entered" << n1 << endl;
}
void display(int n1, int n2)

{
    cout << "you entered" << n1 << "and" << n2 << endl;
}
int main()
{
    display(5);
    display(10, 20);
    return 0;
}