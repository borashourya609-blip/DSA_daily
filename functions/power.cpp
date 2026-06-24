#include <iostream>
using namespace std;

int power(int x, int y)
{
    int ans = 1;

    for(int i = 1; i <= y; i++)
        ans *= x;

    return ans;
}

int main()
{
    int x, y;
    cin >> x >> y;

    cout << power(x, y);

    return 0;
}