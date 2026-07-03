#include <iostream>
using namespace std;

float convert(float f)
{
    return (f - 32) * 5 / 9;
}

int main()
{
    float f;
    cin >> f;

    cout << convert(f);

    return 0;
}