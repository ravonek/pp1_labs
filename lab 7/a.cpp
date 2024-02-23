#include<iostream>
#include<cmath>

using namespace std;


int rec(int a){

    if(a ==  0) return 1;
    if(a ==  1) return 2;

    return pow(2,a);
}

int main(){
    
    int n;

    cin >> n;

    cout << rec(n);
    return 0;
}