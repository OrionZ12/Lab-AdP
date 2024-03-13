#include <iostream>

using namespace std;

int main (){
    float m,km;

    system("CLS");

    cout<<("Masukkan jarak dalam meter : ");
    cin>>(m);

    km = m/1000;

    cout<<("Jarak : ") << km << (" km");
}