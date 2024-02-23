#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int minsum = arr[0][0];

    cout << "coordinates of min elements:" << endl;
    for (int j = 0; j < m; j++) {
        int minrow = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i][j] < arr[minrow][j]) {
                minrow = i;
            }
        }
        cout << minrow + 1 << ";" << j + 1 << endl;
        minsum += arr[minrow][j];
    }

    cout << endl;
    cout << "Their sum:" << endl  << minsum - arr[0][0];

    return 0;
}

