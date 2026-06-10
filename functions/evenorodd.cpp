#include <iostream>
using namespace std;

bool isEven(int n)
{
    return n % 2 == 0;
}

int main()
{
    int num;
    cin >> num;

    if(isEven(num))
        cout << "Even";
    else
        cout << "Odd";

    return 0;
}