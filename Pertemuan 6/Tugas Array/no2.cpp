#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main() {

    system("CLS");

    int i,j,k;
    int test[3][3];

    int a = 0;
    int b = 0;
    int c = 0;

    for (i=0;i<3;i++)
        {
            for (j=0;j<3;j++)
            {
                printf("Masukkan nilai dari [%d][%d] : ",i+1,j+1);
                cin>>test[i][j];

                if (i == 0)
                    {
                        if (test[i][j]>a)
                            {
                                a = test[i][j];
                            }
                    }
                else if (i == 1)
                    {
                        if (test[i][j]>b)
                            {
                                b = test[i][j];
                            }
                    }    
                else if (i == 2)
                    {
                        if (test[i][j]>c)
                            {
                                c = test[i][j];
                            }
                    }
            }

            
        }
    float ef=sqrt(pow(a,2)+pow(b,2)+pow(c,2));
    cout.precision(3);
    cout<<"Efisiensi = "<<ef;

}