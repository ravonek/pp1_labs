#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int busik = 437;
    int mostik[N];

    for (int i = 1; i <= N; i++) {
        cin >> mostik[i];
        if (mostik[i] <= busik) {
            cout << "Crash " << i << endl;
            return 0;
        }
    }

    cout << "No crash" << endl;

    return 0;
}
