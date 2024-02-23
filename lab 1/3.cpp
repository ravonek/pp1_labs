#include<iostream>
#include<math.h>


using namespace std;

int main () 
{
int a, check;
cin>>a;

check = a%2*8;
 
 a = a / 2; 
 
 check = check +  a % 2 * 4;

  a = a / 2; 

  check = check + a % 2 * 2;

   a = a / 2;

   check = check + a % 2;
    
    cout<< check;

  return 0;

}


    

