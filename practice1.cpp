#include<iostream>
using namespace std;

int main(){
    int year;
    cout << "Enter year : ";
    cin >> year;

    if(year%400 == 0){
        cout << "It is a leap year" << endl;
    } else if (year%4 == 0 && year%100 != 0) {
        cout << "It is a leap year" << endl;
    } else {
        cout << "It is not a leap year" << endl;
    }
    return 0;
}