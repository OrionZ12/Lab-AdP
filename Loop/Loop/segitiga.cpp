#include <iostream>
using namespace std;

int main() {
    int i,j,t;
    cout<<"TINGGI : "<<endl;
    cin>>t;

    for (i=t;i>=1;i--)
        {for (j=1;j<=i;j++)
            cout<<i;
            cout<<endl;}
}