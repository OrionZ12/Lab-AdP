#include <iostream>
#include <stdio.h>
using namespace std;


int main() 
{
    system("CLS");
    int x,k,y,i,le,t;
    int nilai[30][30];

    cout << "Masukkan tinggi dari segitiga pascal (0 < x <= 30) : ";
    cin >> y;cout<<endl;
    
    for (x = 1; x <= y; x++)
    {
        for(k = x; k < y; k++)
            {
                cout << " ";
            }

        for (i = 1; i <= x; i++)
            {
                if ( ( nilai[x][i] == nilai[x][1]) || (nilai[x][i] == nilai[i][i]) )
                    {
                        nilai[x][i] = 1;

                    }
                
                else
                    {
                    
                        nilai[x][i] = nilai[x-1][i-1] + nilai[x-1][i];

                      
                    }
                
                cout << nilai[x][i];
                cout << " ";
            }      

        cout << endl;
    }
    cout << endl;

    cout << "Masukkan nilai x segitiga pascal yang dicari (0 < x <= tinggi) : ";
    cin >> t;
    cout << "Masukkan nilai y segitiga pascal yang dicari (0 < x <= tinggi): ";
    cin >> le;cout<<endl;


    printf("Maka nilai pada segitiga pascal di posisi x = %d, dan y = %d adalah %d", t, le, nilai[t][le]);

    return 0;
}