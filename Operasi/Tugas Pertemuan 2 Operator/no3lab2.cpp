#include<iostream>
#include<cmath>
using namespace std;

const float phi = 3.14;

int main()
{   
    int pilihan;
    
    system("CLS");
    
    cout<<"Pilihan 1 = Kerucut"<<endl;
    cout<<"Pilihan 2 = Limas Segitiga"<<endl;
    cout<<"Pilihan 3 = Prisma Segitiga"<<endl;
    cout<<"Pilihan 4 = Bola"<<endl;
    cout<<"Masukkan Pilihan : ";
    cin>>pilihan;

    system("CLS");

    switch (pilihan)
    {
        case 1 : {
            float L,r,s,K,t;

            cout<<"Masukkan jari-jari   : "<<endl; cin>>r;
            cout<<"Masukkan sisi miring : "<<endl; cin>>s;
            cout<<"Masukkan tinggi      : "<<endl; cin>>t;

            L=phi * r * (r + s);
            cout<<"Luas Kerucut = "<<L<<endl;

            K=(phi * pow(r,2) * t) /3;
            cout<<"Volume       = "<<K<<endl;

        }; break;

        case 2 : {
            float La,aa,ta,L2,a2,t2,L3,a3,t3,L4,a4,t4,tinggi,Ltotal,K;

            cout<<"Masukkan lebar alas   : "<<endl; cin>>aa;
            cout<<"Masukkan lebar sisi 1 : "<<endl; cin>>a2;
            cout<<"Masukkan lebar sisi 2 : "<<endl; cin>>a3;
            cout<<"Masukkan lebar sisi 3 : "<<endl; cin>>a4;
            cout<<"Masukkan tinggi alas  : "<<endl; cin>>ta;
            cout<<"Masukkan tinggi sisi 1: "<<endl; cin>>t2;
            cout<<"Masukkan tinggi sisi 2: "<<endl; cin>>t3;
            cout<<"Masukkan tinggi sisi 3: "<<endl; cin>>t4;
        

            La=(aa * ta) / 2;
            L2=(a2 * t2) / 2;
            L3=(a3 * t3) / 2;
            L4=(a4 * t4) / 2;
            
            Ltotal=La+L2+L3+L4;
            cout<<"Luas Limas Segitiga = "<<Ltotal<<endl;

            K=(La*tinggi) /3;
            cout<<"Volume              = "<<K<<endl; 

        }; break;

        case 3 : {
            float La,aa,ta,L2,a2,t2,L3,a3,t3,L4,a4,t4,t,Ltotal,K;

            cout<<"Masukkan lebar alas   : "<<endl; cin>>aa;
            cout<<"Masukkan lebar sisi 1 : "<<endl; cin>>a2;
            cout<<"Masukkan lebar sisi 2 : "<<endl; cin>>a3;
            cout<<"Masukkan lebar sisi 3 : "<<endl; cin>>a4;
            cout<<"Masukkan tinggi alas  : "<<endl; cin>>ta;
            cout<<"Masukkan tinggi sisi  : "<<endl; cin>>t;

            La=(aa * ta) / 2;
            L2=(a2 * t) ;
            L3=(a3 * t) ;
            L4=(a4 * t) ;
            
            Ltotal=(2*La)+L2+L3+L4;
            cout<<"Luas Prisma Segitiga = "<<Ltotal<<endl;

            K=(La*t);
            cout<<"Volume               = "<<K<<endl; 

        }; break;

        case 4 : {
            float r,L,K;

            cout<<"Masukkan jari-jari   : "<<endl; cin>>r;
            
            L=4*phi * r * r;
            cout<<"Luas Bola = "<<L<<endl;

            K=(4*phi*(pow(r,3))) /3;
            cout<<"Volume    = "<<K<<endl;
        }; break;

        default : cout << "Error"; break;
    };
}