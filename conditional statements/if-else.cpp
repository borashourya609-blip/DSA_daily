#include<iostream>
using namespace std;

int main (){
    int marks;
    cout << "enter the marks = " << endl;
    cin >> marks ;

    if (marks >=90) {
            cout << "grade O" << endl;}
        else if (marks >=75) {
            cout << "grade A" << endl;}
        else if (marks >=65) {
            cout << "grade B" << endl;}
        else if (marks >= 35){
            cout << "grade C" << endl;
        }
        else {
            cout << "FAIL" << endl;
        }
    return 0;
}