#include <iostream>
using namespace std;
int main()
{
    float l, b, h, area;
    cout << "enter Lenth, breath and height of the cuboid" << endl;
    cin >> l >> b >> h;

    area = l * b * h;
    cout << "Value of cuboid " << area << endl;
    return 0;
}