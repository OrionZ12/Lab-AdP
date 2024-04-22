#include <iostream>
using namespace std;

int main() {
    system("CLS");
    string kata = "Hore!";
    int N,i;

    cout<<"Masukkan pengulangan : ";
    cin>>N;

    if (N >= 1 && N <= 9000)
        {
            for (char h : kata)
                {
                    if (h == 'o' || h == 'e' || h == '!')
                        {
                            for (i=1;i<=N-1;i++)
                               {  
                                    cout<<h;
                                }
                        }
                    
                    cout<<h;
                }
        }
    else
        cout<<"Input tidak tersedia";

}