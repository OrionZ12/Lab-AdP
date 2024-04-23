#include <iostream>
using namespace std;

int main() {
    string nama = "Chronicle Legacy";

    for (char c : nama)
        {if (c == 'a' || c == 'i'|| c == 'u'|| c == 'e'|| c == 'o')
            c = 'o';
        cout<<c;
}}