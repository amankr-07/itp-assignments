#include<iostream>
using namespace std;

int main(){
    int a, b, c, d, e; //assuming max marks for each subject is 100

    cout << "Enter marks of subject 1 : ";
    cin >> a;
    cout << "Enter marks of subject 2 : ";
    cin >> b;
    cout << "Enter marks of subject 3 : ";
    cin >> c;
    cout << "Enter marks of subject 4 : ";
    cin >> d;
    cout << "Enter marks of subject 5 : ";
    cin >> e;

    float total = a+b+c+d+e;
    float avg = total/5;
    float per = total/5;

    cout << "Total = " << total << endl;
    cout << "Average = " << avg << endl;
    cout << "Percentage = " << per << endl;
    return 0;
}