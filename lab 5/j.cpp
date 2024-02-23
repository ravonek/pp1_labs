#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

  string s;

  cin >> s;

  char d = s[0];
  
  reverse(s.begin(), s.end());

  string j = d + s;

 bool isPalindrome = true;
  
  int size = j.size();
  for(int i = 0; i < size / 2; i++) {
    if(j[i] != j[size - 1 - i]) {
      isPalindrome = false;
      break;
    }
  }

  isPalindrome ? cout << "YES" : cout << "NO";

  return 0;
}