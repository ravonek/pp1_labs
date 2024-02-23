#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  bool isPalindrome = false;
  int size = s.size();
  for(int i = 0; i < size / 2; i++) {
    if(s[i] != s[size - 1 - i]) {
      isPalindrome = true;
      break;
    }
  }

  

  isPalindrome ? cout << "NO" : cout << "YES";
}
