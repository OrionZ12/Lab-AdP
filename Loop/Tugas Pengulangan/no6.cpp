#include <iostream>
#include <cmath>
using namespace std;

int main() {
    system("CLS");
    int i,y,total,x;
    

    cout << "Masukkan bilangan deret : ";
    cin >> x;
    total = 0;

    for (i=0;i<=x;i++)
        {
            if (i % 2 == 1)
                continue;
        
            else if (i % 2 == 0)
                {
                    y = round(pow(i,2));
                    
                    total += y;
                }
        }
    cout<<total;
}