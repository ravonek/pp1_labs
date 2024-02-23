#include<iostream>
#include<string>
using namespace std;

int main() {
    string a;
    cin >> a;

    int ce = 0; 
    int co = 0; 

    for (int i = 0; i < a.size(); i++) {
        int digit = a[i] - '0'; 

        if (i % 2 == 0) {
            ce += digit;
        } else {
            co += digit;
        }
    }

    if (co == ce) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
