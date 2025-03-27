#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int sum = 0;

    do{
        int digit = num%10;
        num /= 10;
        sum += digit;
    } while(num != 0);

    cout << "Sum of digits = " << sum << endl;
    return 0;
}