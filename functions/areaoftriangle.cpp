#include <iostream>
using namespace std;

float areaTriangle(float b, float h)
{
    return 0.5 * b * h;
}

int main()
{
    float b, h;
    cin >> b >> h;

    cout << areaTriangle(b, h);

    return 0;
}