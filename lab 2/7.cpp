#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int maxi;
  /* for(int i = 1; i <= n; i++){
    int a;
    cin >> a;
    if(i == 1) maxi = a;
    if(a > maxi) maxi = a;
  }
   */
  
 int i = 0;
  while( i < n)
  {
      i++;
      int a = a; 
      cin >> a;   
  
  if(i == 1) maxi = a;
    if(a > maxi) maxi = a; }
  cout << maxi;
  return 0;
}