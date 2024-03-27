#include <iostream>
using namespace std;

int main() {
    system("CLS");

    float m, BMI, t;
    string k;

    cout<<"Masukkan berat badan anda (kg) : ";
    cin>>m;
    cout<<"Masukkan tinggi badan (m) : ";
    cin>>t;


    BMI = m/(t*t);

    if (BMI <18.5)
        k = "Berat badan kurang";
    else if (BMI <25)
        k = "Berat badan normal";
    else if (BMI < 30)
        k = "Berat badan berlebih";
    else    
        k = "Obesitas";

    system("CLS");

    cout<<"Body mass index anda adalah "<< BMI <<endl;
    cout<<"Anda memiliki "<<k<<endl;

    return(0);

}