#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int A,B,i;
    string jenis;
    cout<<"Masukkan Tahun : ";
    cin>>A;
    cout<<"Masukkan Interval : ";
    cin>>B;


    if (A >= 1000 && A <= 9000)
        {
            if (B >= -A && B <= 9999)
                {
                    if (B>=0)
                        {
                            for (i=1;i<=B+1;i++)
                                {
                                    if (A % 4 == 0)
                                        {
                                            jenis = "Kabisat";
                                        }
                                    else
                                        {
                                            jenis = "Bukan Kabisat";
                                        }
                                    
                                    cout<<A;
                                    cout<<"   "<<jenis;
                                    cout<<endl;
                                    A+=1;
                                }
                        }

                    else if (B<0)
                        {   
                            B = B/(-1);
                            for (i=1;i<=B+1;i++)
                                {
                                    if (A % 4 == 0)
                                        {
                                            jenis = "Kabisat";
                                        }
                                    else
                                        {
                                            jenis = "Bukan Kabisat";
                                        }
                                    
                                    cout<<A;
                                    cout<<"   "<<jenis;
                                    cout<<endl;
                                    A-=1;
                                }
                        }
            else
                cout<<"Input tidak tersedia";

        }
            }
    else
        cout<<"Input tidak tersedia";

}