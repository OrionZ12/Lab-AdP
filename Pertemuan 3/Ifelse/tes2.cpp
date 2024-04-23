#include <iostream>
using namespace std;

int main() {
    int u;
    system("CLS");
    cout<<"Berapa umur? ";
    cin>>u;

    if (u<0)
    cout<<"Umur tidak tersedia";
    else {
        if (u<5)
        cout<<"Balita";
      
        else if (u<=12 && u>=5)
        cout<<"anak-anak";
        else if (u<=19 && u>5)
        cout<<"remaja";
        else if (u<=54 && u>19)
        cout<<"Dewasa";
        else if (u<=65 && u>54)
        cout<<"Lansia";
        else
        cout<<"Error";
        
    }

}