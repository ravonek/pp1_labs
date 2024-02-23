#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int zeros = 0;
  for(int i = 1; i <= n; i++) {
    int input;
    cin >> input;
   
    while (input > 0) {
      int lastNumber = input % 10;
      if(lastNumber == 0) zeros++;

      input /= 10;
      
    }
  
  }
  cout << zeros;
  return 0;
}