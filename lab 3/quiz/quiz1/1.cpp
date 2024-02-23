#include<iostream>
using namespace std;

int main(){

    int portions, guests;
    cin >> guests;

    if ( guests > 1 && guests % 2 == 0) {
     portions = guests / 2;
     cout << portions;
    }
    else if ( guests > 1 && guests % 2 != 0){
        portions = guests;
             cout << portions;

    }
    else cout << 0;


    return 0;
}