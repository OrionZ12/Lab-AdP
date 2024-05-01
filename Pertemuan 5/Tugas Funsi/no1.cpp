#include <iostream>
#include <typeinfo>
using namespace std;


int tipe;
int fizzbuzz(int bil, int tes) {

    if (bil % 3 == 0 && bil % 5 == 0)
        {
            cout<<"FizzBuzz";
        }
    
    else if (bil % 3 == 0)
        {
            cout<<"Fizz";
        }

    else if (bil % 5 == 0)
        {
            cout<<"Buzz";
        }
    
    else if (bil % 3 != 0 && bil % 5 != 0)
        {
            cout<<bil;
            tipe = bil;
        }


    return tipe;


}

int deret(int blt) {
    int i, suku, beda, fb;

    suku = 2;
    beda = 4;
    for (i=1;i<=blt;i++)
        {
            fb = fizzbuzz(suku, fb);
            if (i <= blt-1)
                {
                    cout<<", ";
                    
                }
            
            suku += beda;
            beda += 2;
         
        }
    
    cout<<endl;
    cout << "Tipe data " << tipe << " adalah " << typeid(tipe).name();
        


}


int main() {
    system("CLS");
    int x;
    char e;
    cout<<"Masukkan suatu bilangan bulat antara 3-100 : ";
    cin>>x;

    if (x < 3 || x > 100)
        {
            cout<<"Inputan invalid, berikan nilai dari rentang 3-100";
            goto e;
        }

    deret(x);

    e:
    return 0;

}