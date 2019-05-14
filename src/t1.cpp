#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = a++;
    int c = a++;
    int d = a++;
    int e = a++;
    int f = a++;
    int g = a++;
    int h = a++;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
    cout << g << endl;
    cout << h << endl; 
    cout << rand() % 9 + 1 << endl;
}