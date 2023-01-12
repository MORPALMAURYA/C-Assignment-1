#include <iostream>
using namespace std;
int main()
{
    int max, x, y;
    cout << "enter two number" << endl;
    cin >> x >> y;

    max = x > y ? x : y;

    cout << "max of two numbers is " << max << endl;
    return 0;
}