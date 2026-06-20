// WAF TO PRINT ALL PRIME NUMBERS FROM 1 TO N
#include<iostream>
using namespace std;

void printprime(int n){
    for(int i = 2;i<=n;i++){
    bool isprime = true;
    
        for(int j = 2 ;j<i;j++){
            if (i % j == 0){
                isprime = false;
                break;
            }
        }
        if(isprime)
        cout << i << " ";
    }
}
        int main(){
            int n;
            cin >> n;
            printprime(n);
            return 0;
        }
