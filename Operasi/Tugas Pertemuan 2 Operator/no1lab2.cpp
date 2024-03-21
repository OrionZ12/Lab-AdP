#include <iostream>
using namespace std;

int main() {
    
    int I=2, K=7, L=1, C=9, U=5, S=6;
    int hasil1, hasil2, hasil3, hasil4;

    system("CLS");

  
    hasil1 = (3-1)<I || (K-5)<(8+2) && (L+7)>=(9+3);
    cout << "a. Hasil = "<< hasil1 << endl;
        

    hasil2 = (L+3)>U && ((C/U)<S || (3*1-K)>0);
    cout << "b. Hasil = "<< hasil2 << endl;
       

    hasil3 = (I-9)>K || (L+3)<(4*C);
    cout << "c. Hasil = "<< hasil3 << endl;
       
 
    hasil4 = I | K & L ^ 3 << 2;
    cout << "d. Hasil = "<< hasil4 << endl;
        
}