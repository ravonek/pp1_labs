#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    int line;
    cin >> line;

    int cnt = 0;

    for (int i = 0; i < n; i++) {
        int num = v[i];

        if (num <= 1) {
            continue; 
        }

        bool isPrime = true;

        for (int j = 2; j * j <= num; j++) {
            if (num % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime && num > line) {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}