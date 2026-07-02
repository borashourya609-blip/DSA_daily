#include<iostream>
using namespace std;

int bintodecimal(int binNum) {
    int ans =0, pow =1 ;// 2 ki power 0  
        while (binNum > 0){
            int rem = binNum % 10;
            ans += (rem * pow);
            binNum /= 10;
            pow *= 2;
    }
    return ans; // decimal form
}
    int main(){
        int binNum = 1100101;
        cout << bintodecimal(binNum) << endl;

    return 0;
}