#include <iostream>
#include <string>
#define batasnama 100


using namespace std;

int main (){

    string nama1;
    char nama[batasnama];

    system("CLS");    

    cout<<("Masukkan nama    :");
    cin.getline(nama,batasnama);
    cout<<("Masukkan nama lagi   :");
    cin>>nama1;

    system("CLS");
    
    cout<<("Nama    : ")<< nama << endl;
    cout<<("Nama    : ")<< nama1 << endl;
   
}