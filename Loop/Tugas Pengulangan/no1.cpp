#include <iostream>
using namespace std;

int main() {
    system ("CLS");
    int x,y,i,z;
    cout<<"Masukkan deret yang ingin di cari : ";
    cin>>x;cout<<endl;

    z=1;
    for (i=1;i<=x;i++)
        {
            cout<<z<<" ";

            {
            if (i % 2 == 1)
                y=5;
            else if (i % 2 == 0)
                y=3;
            }          
            z = z + y; 
        }
}
