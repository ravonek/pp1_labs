#include <iostream>
using namespace std;

int main() {
    int x, y, m, n;
    cin >> x >> y >> m >> n;

    // Проверяем, хватит ли кофт размера "S" для людей, носящих "S"
    if (y >= n) {
        // Если кофты "S" хватает, теперь проверяем, хватит ли кофт размера "М" для всех
        if (x >= (m + n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
