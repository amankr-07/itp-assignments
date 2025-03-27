#include<iostream>
using namespace std;

int main(){
    float a, b, c;
    cout << "Enter 1st angle : ";
    cin >> a;
    cout << "Enter 2nd angle : ";
    cin >> b;
    cout << "Enter 3rd angle : ";
    cin >> c;

    if(a!=0 && b!=0 && c!=0){
        if(a+b+c == 180){
            if(a==b && b==c && a==c) {
                cout << "Equilateral triangle";
            } else if((a==b) || (b==c) || (a==c)){
                cout << "Isosceles triangle";
            } else {
                cout << "Scalene triangle";
            }
        } else {
            cout << "It is not a valid traingle";
        }
    } else {
        cout << "It is not a valid traingle";
    }
    
    return 0;
}