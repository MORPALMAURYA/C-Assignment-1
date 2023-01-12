#include <iostream>
using namespace std;
int main()
{
    int a[10], sum = 0;
    cout << "enter 10 numbers" << endl;

    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        sum = sum + a[i];
    }
    cout << "Sum of 10 numbers =" << sum << endl;
    return 0;
}