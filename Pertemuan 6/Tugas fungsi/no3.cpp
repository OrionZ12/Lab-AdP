#include <iostream>
#include <cmath>
using namespace std;

int main() {

    system("CLS");
    string kl;
    int k,i;
    cout<<"Masukkan Kalimat (A-Z, ' ', dan <=100 char): ";
    getline(cin, kl);

    char klm[99];

    i = 0;
    for (char c : kl)
        {
            klm[i] = c;
            i+=1;
        }
    
    double j = ceil(((i-1)/2));

    for (k=j;k>=0;k--)
        {
            cout<<klm[k];
        }
        
    for (k=i-1;k>=j+1;k--)
        {
            cout<<klm[k];
        }

}