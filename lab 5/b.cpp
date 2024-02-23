#include<iostream>
#include<string>
using namespace std;

int main(){

    string s;
    cin >> s;

    for (int i = 0;i < s.size(); i++){
        if(( s[i] >= 'a' && s[i] <= 'z' || s[i] >='A' && s[i] <= 'Z' )) {
            char a = s[i];
            a = toupper(a);
            cout << a;
        }
     }
    return 0;
}