#include <iostream>
using namespace std;

bool rec(int arr[], int n, int x, int i = 0) {
    if (i >= n) {
        return false; 
    }

    if (arr[i] == x) {
        return true; 
    } else {
        return rec(arr, n, x, i + 1);
    }
}

int main() {
    int n, x;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> x;

    bool isFound = rec(arr, n, x);

    isFound ? cout << "Yes" : cout << "No";

    return 0;
}
