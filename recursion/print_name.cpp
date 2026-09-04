//print name N times using recursion
#include<iostream>
using namespace std ;

void f(int i,int N) {
        if(i>N)
        return;

    cout << "raj" << " " << endl;
    f(i+1 , N);
    }

int main(){
    int N;
    cin >> N;
    f(1 , N);

    return 0;
}