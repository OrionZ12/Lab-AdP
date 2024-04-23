#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int x,i,j,k,l;


    cout<<"Masukkan tinggi : ";
    cin>>x;

    for (i=1;i<=x;i++)
        {   cout<<i<<endl;
            if (i>=1 && i<=((x/2)))
                {
                    for (j=1;j<=(x/2);j++)
                        {
                            for (k=(x/2);k>=j;k--)
                                {cout<<" ";}

                            for (l=1;l<=j;l++)
                                cout<<"* ";
                            cout<<endl;
                        }
                }
            else if (i == ((x/2)+1))
                {
                    for (j=1;j<=i;j++)
                        {
                            cout<<"* ";
                        }
                    cout<<endl;
                }
            
            else if (i <= x || i >= (x/2))
                {
                    for (l=1;l<=(x/2);l++)
                        for (j=1;j<=(x/2);j++)
                            {
                                cout<<" ";
                            }
                        
                        for (k=(x/2);k>=l;k--)
                            {
                                cout<<"* ";
                            }
                        cout<<endl;
                }
        }
}