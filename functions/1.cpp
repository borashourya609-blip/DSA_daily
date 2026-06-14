#include<iostream>
using namespace std;

//function definition
int printhello(){
    cout<< "hello\n";
    return 3;

}
int main(){
    //function call / invoke
    int val = printhello();
    cout << "val = " << val << endl;

    return 0;
}