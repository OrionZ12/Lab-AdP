#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector>
using namespace std; 



int main(){
    system("CLS");
    
    vector<int> deret;
    string x;
    int n,baru;
    char ch;


    cout<<"Masukkan deret bilangan bulat yang dipisahkan oleh koma (,) : ";
    getline(cin, x);
    cout<<endl;


    stringstream ss(x);
   
    while(ss >> n) 
        {
            if(ss >> ch)
                deret.push_back(n);
            else
                deret.push_back(n);  
        }
    
    int sz=deret.size();

    for(int i=0;i<sz;i++)
        cout<<deret[i]<<" ";
    
    cout<<endl;
    cout<<"Panjang Vektor : "<<sz<<endl;

    for(int j=0; j < sz; j++)
        {
            cout<<deret[0]<<endl;
            deret.erase(deret.begin());
        }

    cout<<"Panjang Vektor : "<<deret.size()<<endl;
}