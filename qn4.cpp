#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;

    char opr;
    cout << "Enter operation : ";
    cin >> opr;

    switch (opr){
        case '+':
            cout << "Sum = " << a+b;
            break;
        case '-':
            cout << "Difference = " << a-b;
            break;
        case '*':
            cout << "Product = " << a*b;
            break;
        case '/':
            cout << "Integral Quotient = " << a/b;
            break;
        case '%':
            cout << "Remainder = " << a%b;
            break;
        default:
            cout << "Incorrect operation !!!";
    }
    return 0;
}