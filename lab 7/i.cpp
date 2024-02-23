#include <iostream>
using namespace std;

int rec(int sum = 0) {
    int a;
    cin >> a;

    if (a == 0) {
        return sum;
    }

    return rec(sum += a);
}

int main() {
    
    int sum = rec();

    cout << sum << endl;

    return 0;
}


