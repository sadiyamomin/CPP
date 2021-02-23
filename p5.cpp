//wapto create a class person

#include <iostream>

using namespace std;
class person
{
public:
    int age;
    float h;
    int w;

public:
    void displayInfo()

    {
        cout << "age-" << age << endl;
        cout << "height-" << h << endl;
        cout << "weight-" << w << endl;
    }
};
int main()
{
    person sadiya;
    sadiya.age = 19;
    sadiya.h = 5.3;
    sadiya.w = 50;

    sadiya.displayInfo();
    return 0;
}