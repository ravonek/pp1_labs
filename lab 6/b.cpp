#include <iostream>
using namespace std;

void rezultat(int result[], int n);
void massive(int arr[], int arr1[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    int result[n]; 

    for (int i = 0; i < n; i++) {
        int a = arr[i];
        int b = arr1[i];
        int c = abs(a - b);
        result[i] = c; 
    }
    rezultat(result, n);
}

void rezultat(int result[], int n) {
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    int arr1[n];

    massive(arr, arr1, n);

    return 0;
}
