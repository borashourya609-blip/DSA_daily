#include <iostream>
using namespace std;

float simpleInterest(float p, float r, float t)
{
    return (p * r * t) / 100;
}

int main()
{
    float p, r, t;
    cin >> p >> r >> t;

    cout << simpleInterest(p, r, t);

    return 0;
}