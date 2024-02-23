#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;


void foo(int a, int b, double c){

     c = sqrt(a*a + b*b);
    cout <<setprecision(4) <<  c;
}

int main(){

    int a, b;
    double c;
    cin >> a >> b;
    
    foo(a, b, c);

    return 0;
}