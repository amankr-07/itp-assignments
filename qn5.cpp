#include<iostream>
using namespace std;

int main(){
    int r;
    cout << "Enter radius : ";
    cin >> r;
    
    cout << "Diameter = " << (2*r) << endl;
    cout << "Circumference = " << (2*3.14*r) << endl;
    cout << "Area = " << (3.14*r*r) << endl;
    return 0;
}