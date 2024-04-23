#include <iostream>
using namespace std;

int main() {
    system("CLS");
    string k;
    char ad;
    int i;

    cout<<"Masukkan kalimat : ";
    getline(cin,k);

    i=0;
    for (char c : k)
        {
            i+=1;
        }
    for (ad=i;ad>=0;ad--)
        {
            cout<<k[ad]<<endl;
        }
    
}