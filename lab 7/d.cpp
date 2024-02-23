#include <iostream>
#include <string>

using namespace std;

int sumOfDigits(string s, int index = 0) {
    if (index == s.length()) {
        return 0; 
    } else {
        char c = s[index]; 
        int digit = c - '0'; 
        return digit + sumOfDigits(s, index + 1); 
    }
}

int main() {
    string n;

    cin >> n;

    int result = sumOfDigits(n);
    string res = to_string(result);

    cout << res << endl;

    return 0;
}
