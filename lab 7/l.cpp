#include<iostream>

using namespace std;

bool isPalindrome(string s, int i = 0){

    if (i >= s.size()) return true;
    char c = s[i];

    if(s[i] == s[s.size() - 1 - i]) return isPalindrome(s, i + 1);
    else return false;
}

int main(){

    string s;

    cin >> s;

    bool pal = isPalindrome(s);

    pal ? cout << "Yes" : cout << "No";

    return 0;

}