#include <iostream>

using namespace std;

void printNumbers(int n, int current = 1) {
    if (current > n) {
        return; 
    }

    cout << current << " ";
    printNumbers(n, current + 1);
}

int main() {
    int n;

    cin >> n;

    printNumbers(n);

    return 0;
}
