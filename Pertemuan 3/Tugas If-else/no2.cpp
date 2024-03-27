#include <iostream>
using namespace std;

int main() {
    system ("CLS");
    int gol, anak, gajitotal;
    double gaji,bonus;
    
    char nama[100];

    cout<<"Masukkan nama anda : ";
    cin.getline(nama,100);
    
    cout<<"Masukkann golongan (1,2,3) : ";
    cin>>gol;
    
    cout<<"Masukkann jumlah anak : ";
    cin>>anak;



    switch(gol)
    {
        case (1) : gaji = 5000000;break;
        case (2) : gaji = 3000000;break;
        case (3) : gaji = 2500000;break;
        
    default : cout<<("Golongan tidak tersedia")<<endl;
    }
    
    if (anak<0)
        cout<<"Siapa sangka :( ";

    else if (anak<=2)
        bonus = 500000*anak;

    else
        bonus = 750000*anak;

           
    gajitotal =  (gaji-(gaji*5/100)) + bonus;

    cout<<"Gaji Total : Rp"<<gajitotal<< ",-"<<endl;

    return(0);
}
