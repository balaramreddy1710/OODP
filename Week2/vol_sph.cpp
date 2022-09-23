#include <iostream>
#include <math.h>
using namespace std;

inline float vol_Sphere(int radius)
{
    return 4.0 / 3.0 * 3.14159 * pow(radius, 3);
}
int main()
{
    int radius;
    cout << "Enter the radius:" << endl ;
    cin >> radius ;
    cout << "The volume of the sphere: " << vol_Sphere(radius);
    return 0;
}