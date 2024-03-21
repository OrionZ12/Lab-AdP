#include<iostream>
#include<cmath>
using namespace std;

int main() {

    float a, b, c;
    float x1, x2, x3;
    int pangkat = 2;

    system("CLS");

    cout << "Input nilai A : ";
    cin >> a;

    cout << "Input nilai B : ";
    cin >> b;

    cout << "Input nilai C : ";
    cin >> c;

    x1 = ((-b) + (sqrt((pow(b,2)- 4*a*c)))) / (2*a);
    x2 = ((-b) - (sqrt((pow(b,2)- 4*a*c)))) / (2*a);

    system("CLS");
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;

}