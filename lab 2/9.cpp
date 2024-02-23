#include<iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int sum = 0;
    for(int i = 0; i < n; i++ ) {
        int b;
        cin >> b;
        if ( b % 10 == 7) {
            sum++;
        }
    }
    cout << sum;
    return 0;
}

