#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int m = 2;

    while (m <= num && num % m != 0) {
        m++;
    }

    cout << num << " " << m << endl;

    return 0;
}
