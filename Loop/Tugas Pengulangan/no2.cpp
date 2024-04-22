#include <iostream>
using namespace std;

main() {
    system("CLS");
    string kalimat;
    char huruf;
    int i;

    cout<<"Masukkan kalimat : ";
    getline(cin, kalimat);

    cout<<"Huruf yang ingin dibuang : ";
    cin>>huruf;

    i=0;
    for (char c : kalimat)
        {
            if (c == tolower(huruf) || c == toupper(huruf)) 
                {
                    i+=1;
                    continue;
                }            
            cout <<c;            
        }   
    
    cout<<endl;
    cout<<"Karakter terhapus = "<<i;
}