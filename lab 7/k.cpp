#include <iostream>

using namespace std;

int rec(string s, int max = 0, int i = 0) {


    if(i == s.size()) return max;
    
    if(s.empty() || s.size() == 1 && s[0] == '0') return 0;


    int a = s[i] - '0';

    if(a > max) max = a;
    

    return rec(s, max, i + 1);
}

int main() {
    string s;
    cin >> s;

    int result = rec(s);

    cout << result;

    return 0;
}
