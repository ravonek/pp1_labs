#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    
    int array[a];

    for (int i = 0; i < a; i++) {
        cin >> array[i];
    }

    int i = a - 1;
    while (i >= 0) {
        cout << array[i] << " ";
        i--;
    }

    return 0;
}
