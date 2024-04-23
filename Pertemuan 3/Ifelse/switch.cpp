#include <iostream>
using namespace std;

int main() {
    int u;
    system("CLS");
    cout<<"Berapa umur? ";
    cin>>u;

    switch (u):
    {
    case (-1):
        cout<<"Error";
        break;
    
    case (0 ... 4):
        cout<<"Balita";
        break;

    case (5 ... 12):
        cout<<"Anak";
        break;
    case (6 ... 19):
        cout<<"Remaja";
        break;
    case (20 ... 54):
        cout<<"Dewasa";
        break;
    case (54 ... 65):
        cout<<"Lansia";
        break;
    
    

    default:
        cout<<"error";

        break;
    }
}