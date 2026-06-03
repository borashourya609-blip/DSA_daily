#include<iostream>
using namespace std ;

int main(){
    int n = 12;
    bool isprime = true;  
    for (int i = 2 ; i*i <=n ; i++ ){
        if (n%i == 0){
            isprime = false;
            break;
        }
    }

    if (isprime == true){
        cout << "prime no." << endl;
    } else {
        cout << "non prime no." << endl;
    }
    return 0;
}