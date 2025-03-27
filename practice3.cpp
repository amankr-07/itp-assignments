#include<iostream>
using namespace std;

int main(){
    float l;
    cout << "Enter length in cm : ";
    cin >> l;
    float l1 = l/100;
    float l2 = l/100000;
    cout << "Length in meters : " << l1 << endl;
    cout << "Length in kilometers : " << l2 << endl;
    return 0;
}