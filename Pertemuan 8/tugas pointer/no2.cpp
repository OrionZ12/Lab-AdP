#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int x = 25;
    int *px;

    cout << "1. px = &x => " <<  (px = &x) <<endl; //akan menampilkan 0x61ff08
    cout << "2. *px = x => " <<  (*px = x) <<endl; //akan menampilkan 25

    //no.1 dan no.2 bisa dibilang ekuivalen atau setara, karena perintah no.1 akan menampilkan alamat dari nilai x
    //dan perintah no.2 akan menampilkan nilai x itu sendiri
    //Jadi, walaupun menampilkan hasil yang berbeda bentuk, no.1 dan no.2 setara karena merujuk pada hal yang sama yaitu pada alamat x dan x itu sendiri.
}