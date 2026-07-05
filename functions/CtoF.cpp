#include <iostream>
using namespace std;

float convert(float c)
{
    return (9.0/5.0) * c + 32;
}

int main()
{
    float c;
    cin >> c;

    cout << convert(c);

    return 0;
}