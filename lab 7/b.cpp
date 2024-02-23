#include <iostream>
#include <string>
using namespace std;

void rec(int n) {
    
    if (n == 0) {
        cout << "0"; 
        return;
    }
    


    cout << n % 2;
    rec(n / 2);
}

int main(){


    int n;

    cin >> n;

    rec(n);

    return 0;
}
