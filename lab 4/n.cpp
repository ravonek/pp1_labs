#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    for (int i = 2; i <= a; i++) {
        bool isPrime = true;

        for (int j = 2;j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << i << " is prime" << endl;
        }
    }

    return 0;
}
