// WAF TO PRINT NTH FIBONACCI
#include <iostream>
using namespace std;

void fibonacci(int n)
{
    int a = 0, b = 1, next;

    if(n >= 1)
        cout << a << " ";

    if(n >= 2)
        cout << b << " ";

    for(int i = 3; i <= n; i++)
    {
        next = a + b;
        cout << next << " ";

        a = b;
        b = next;
    }
}

int main()
{
    int n;
    cin >> n;

    fibonacci(n);

    return 0;
}