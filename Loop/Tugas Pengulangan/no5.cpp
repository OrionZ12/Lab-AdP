#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int i, x;
    bool p = true;

    cout << "Masukkan bilangan : ";
    cin >> x;

    if (x == 0 || x == 1) 
            {
                p = false;
            }

    
    for (i = 2; i <= x/2; ++i) 
        {
            if (x % i == 0) 
                {
                    p = false;
                    break;
                }
        }

    if (p)
        cout <<"Prima";
    else
        cout <<"Bukan Prima";

}