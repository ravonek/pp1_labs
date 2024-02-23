#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int sumEv = 0;
    int sumOd = 0;

    while (n > 0) {
        int digit = n % 10;

        if (digit % 2 == 0) {
            sumEv += digit; 
        } else {
            sumOd += digit; 
        }

        n /= 10; 
    }

    sumEv > sumOd ? cout << sumEv : cout << sumOd;

    return 0;
}
