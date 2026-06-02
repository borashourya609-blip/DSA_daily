//sum of all odd no.s from 1 to n
#include<iostream>
using namespace std;
int main (){
    int n = 10;
    int sum = 0;

    for (int i = 1 ; i <= n; i++ ){
        if (i%2 != 0){
            sum += i;
        }
        
    }
    cout << "sum is = " << sum << endl ;
    return 0;

}
