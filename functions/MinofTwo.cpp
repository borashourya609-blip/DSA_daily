#include<iostream>
using namespace std;

//min of 2 nums
int minofTwo(int a , int b){
    if(a<b){
        return a;
    } else {
        return b;
    }
    
}
int main(){
    cout << "min = " << minofTwo(10,9)<<endl; // arguements

    return 0;
}