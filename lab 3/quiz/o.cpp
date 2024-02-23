#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
   
    int thousands = (n / 1000) % 10;
    int hundreds = (n / 100) % 10;
    int tens = (n / 10) % 10;
    int ones = n % 10;

    if (thousands == ones && hundreds == tens) cout << "YES";
    else cout<<"NO";


    return 0;
}