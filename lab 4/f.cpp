#include<iostream>
using namespace std;

int main() {
    long long size;

    cin >> size;

    long long arr[size][size];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> arr[i][j];
        }
    }

     long long max = arr[0][0];

    long long raw = 1; 
    long long col = 1;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int a = arr[i][j];
            if (max < a) {
                max = a;
                raw = i + 1;
                col = j + 1;
            }
        } 
    }

 cout << raw << " " << col;
    return 0;
}
