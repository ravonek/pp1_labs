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
    long long max1 = arr[0][0];

    for (int i = 0; i < size; i++) {
        
        for (int j = 0; j < size; j++) {
        int a = arr[i][j];
        if (max < a)  {   
            max1 = max;
            max = a;    
        }
        else if (max1 < a && a != max) {
             max1 = a;
        }
        }
    }
     if (max == max1) {
        cout << 0;
    } else {
        cout << max1;
    }
    

    return 0;

}