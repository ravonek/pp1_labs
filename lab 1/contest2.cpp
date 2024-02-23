#include<iostream>
using namespace std;
int main(){
     int a;
     cin>>a;
     int sum = 0;

     
     while(a > 0){
            int i = a % 10;
             sum += i;
            a /= 10;
           
     }
     cout<< sum << endl;
        return 0;
}