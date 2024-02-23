#include<iostream>
using namespace std;

 int main() {
    long long raw;
    long long col;
    cin >> raw >> col;
    long long arr[raw][col];

    for (int i = 0; i < raw; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    long long counter = 0;

    for (int i = 0; i < raw; i++) {
        
        for (int j = 0; j < col; j++) {

        int a = arr[i][j];
        if ( a < 0 ) counter++;            
        
        }
    }

    cout << counter;

    return 0;
}
