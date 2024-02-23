#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return 0;
    if (n <= 0) return 0;
    if (n == 2) return 1;


    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cin >> n;
    int result = fibonacci(n);
    cout << result << endl;
    return 0;
}
