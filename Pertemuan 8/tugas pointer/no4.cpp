#include <iostream>
using namespace std;

void tambah(float *pbil1, float *pbil2)
    {
        cout << "Hasil                  : " << *pbil1 + *pbil2 << endl;
    }

void kurang(float *pbil1, float *pbil2)
    {
        cout << "Hasil                  : " << *pbil1 - *pbil2 << endl;
    }

void kali(float *pbil1, float *pbil2)
    {
        cout << "Hasil                  : " << *pbil1 * *pbil2 << endl;
    }

void bagi(float *pbil1, float *pbil2)
    {
        cout << "Hasil                  : " << *pbil1 / *pbil2 << endl;
    }


int main() 
{
    system("CLS");
    char operasi;
    float bil1, bil2;
    
    cout << "Masukkan operasi (+,-,*,/): ";
    cin >> operasi;

    cout << "Masukkan angka pertama : ";
    cin >> bil1;

    cout << "Masukkan angka kedua   : ";
    cin >> bil2;

    switch (operasi)
    {
        case '+'    : 
            tambah(&bil1, &bil2);
            break;

        case '-'    : 
            kurang(&bil1, &bil2);
            break;

        case '*'    : 
            kali(&bil1, &bil2);
            break;

        case '/'    : 
            bagi(&bil1, &bil2);
            break;

        default     : 
            break;
    }

}