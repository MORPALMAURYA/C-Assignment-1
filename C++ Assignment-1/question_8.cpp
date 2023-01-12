#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "enter a number" << endl;
    cin >> x >> y;

    x = x + y;
    y = x - y;
    x = x - y;

    cout << "After swaping Value of x = " << x << " and y= " << y << endl;
    return 0;
}