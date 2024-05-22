#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int bil[10];
    int i, *ptrganjil;
    for (i = 0; i<20 ; i++)
        {
            if (i % 2 == 1 )
                {
                    bil[i] = i;
                }
            else 
                {
                    continue;
                }
            cout << bil[i] << ", alamat = " << &ptrganjil[i] << endl;
        }
}
