#include <iostream>
using namespace std;

int main() {
    char nilai;
    cout<<"berapa nilai : ";
    cin>>nilai;
    if (nilai == 'A')
        cout<<"Bagus, Pertahankan";
    else if (nilai == 'B')
        cout<<"tingkatkan";
    else if (nilai == 'C')
        cout<<"Perlu di tingkatkan";
    else if (nilai == 'D')
        cout<<"Perlu belajar lg";
    else if (nilai == 'E')
        cout<<"BLOG";
    else
        cout<<"error";

}