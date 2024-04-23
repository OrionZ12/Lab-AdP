#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int x;

    cout<<"Masukkan bilangan : ";
    cin>>x;

    if (x % 2 == 0)
        {      
            cout<<x<<" adalah bilangan genap"<<endl;    
            if (x % 3 == 0)
                {
                    cout<<x<<" habis dibagi 3"<<endl;
                }
            if (x % 3 != 0)
                { 
                    cout<<x<<" tidak habis dibagi 3"<<endl;
                }
            if (x % 5 == 0)
                {
                    cout<<x<<" habis dibagi 5"<<endl;
                }
            if (x % 5 != 0)
                { 
                    cout<<x<<" tidak habis dibagi 5"<<endl;
                }            
            if (x % 7 == 0)
                {
                    cout<<x<<" habis dibagi 7"<<endl;
                }
            if (x % 7 != 0)
                { 
                    cout<<x<<" tidak habis dibagi 7"<<endl;
                }
            
            
        }
    else
        {    
            cout<<x<<" bukan bilangan genap"<<endl;    
            if (x % 3 == 0)
                {
                    cout<<x<<" habis dibagi 3"<<endl;
                }
            if (x % 3 != 0)
                { 
                    cout<<x<<" tidak habis dibagi 3"<<endl;
                }
            if (x % 5 == 0)
                {
                    cout<<x<<" habis dibagi 5"<<endl;
                }
            if (x % 5 != 0)
                { 
                    cout<<x<<" tidak habis dibagi 5"<<endl;
                }            
            if (x % 7 == 0)
                {
                    cout<<x<<" habis dibagi 7"<<endl;
                }
            if (x % 7 != 0)
                { 
                    cout<<x<<" tidak habis dibagi 7"<<endl;
                }
        }
        
}