#include<iostream>

using namespace std;

void foo(string s){

    for(int i = 0; i < s.size(); i++){

        char c = s[i];

        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
       c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){

        continue;
       }
       else cout << c;
    }
}


int main(){

    string s;

    cin >> s;

    getline(cin, s);

    foo(s);

    return 0;
}