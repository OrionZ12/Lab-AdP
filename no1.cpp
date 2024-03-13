#include <iostream>
#include <string>
#define batasnama 100
#define batasnim 10

using namespace std;

int main (){

    float ipk;
    char kom, nama[batasnama], nim[batasnim];

    system("CLS");    

    cout<<("Masukkan nama    :");
    cin.getline(nama,batasnama);
    cout<<("Masukkan NIM     :");
    cin.getline(nim,batasnim);
    cout<<("Masukkan KOM     :");
    cin>>kom;
    cout<<("Masukkan IPK     :");
    cin>>ipk;

    system("CLS");
    
    cout<<("Nama    : ")<< nama << endl;
    cout<<("NIM     : ")<< nim << endl; 
    cout<<("KOM     : ") << kom << endl;
    cout<<("IPK     : ")<< ipk << endl;
}