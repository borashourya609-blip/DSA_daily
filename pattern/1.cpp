#include <iostream>
using namespace std;

void printStars(int n) {
    for (int i = 1; i <= n; i++) {
        cout << "* ";
    }
}

int main() {
    printStars(5);
    return 0;
}