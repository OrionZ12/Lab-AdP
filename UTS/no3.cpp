#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int x,i;
    bool p = true;

    cout<<"Masukkan bilangan bulat : ";
    cin>>x;

    if (x == 0 || x == 1)
        {
            p = false;
        }
    
    for (i=2;i<=x/2;i++)
        {
            if (x % i == 0)
                {
                    p = false;
                }
        }
    
    if (p)
        cout<<x<<" adalah bilangan prima";
    else   
        cout<<x<<" bukan bilangan prima";
        

}