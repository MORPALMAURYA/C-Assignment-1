#include <iostream>
using namespace std;
int main()
{
    float avg, l, b, h;
    cout << "enter three numbers" << endl;

    cin >> l >> b >> h;
    avg = (l + b + h) / 3.0;
    cout << "Average of three number is " << avg << endl;
    return 0;
}