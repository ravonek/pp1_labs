#include <iostream>
#include <cmath>

using namespace std;

string foo(int n, int i = 0) {
    int b = pow(2, i);
    if (b == n) {
        return "Yes";
    } else if (b > n) {
        return "No";
    } else {
        return foo(n, i + 1);
    }
}

int main() {
    int n;

    cin >> n;

    cout << foo(n) << endl;
    return 0;
}
