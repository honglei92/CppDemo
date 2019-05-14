#include <iostream>
using namespace std;
int main()
{
    int a = 20;
    cout << a << endl;
    int *add;
    add = &a;
    cout << add << endl;
    return 0;
}