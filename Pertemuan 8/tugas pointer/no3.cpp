#include <iostream>
#include <string.h>
using namespace std;

int main() {
    system("CLS");
    char *pklm = "K O M P U T E R";
    int i;
    int x = 0;
    char arr[8];

    i = strlen(pklm);
    
    for (int j = 0 ; j < i ; j++)
        {
            if (pklm[j] == ' ')
                {
                    continue;
                }

            else
                {
                    arr[x] = pklm[j];
                    x+=1;
                }
        }
    cout << "Huruf ke 5 dari "<< arr << " adalah " << arr[4];

}