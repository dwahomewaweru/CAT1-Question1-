// CAT1(Question1)
// C++ Program that computes the area and volume of a cylinder


#include <iostream>
using namespace std;

int main()
{
    float r, h, area, volume;
    cout << "Enter value of the cylinder radius: ";
    cin >> r;
    cout << "Enter value of cylinder height: ";
    cin >> h;

    //Formula to compute area of cylinder
    area = 2 * 3.141592 * r * h + 2 * 3.141592 * r * r;
    //Formula to compute volume of cylinder
    volume = 3.141592 * r * r * h;

    cout << "Area of cylinder = " << area << endl;
    cout << "Volume of cylinder = " << volume << endl;

    return 0;
}