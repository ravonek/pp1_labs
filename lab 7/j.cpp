#include<iostream>
using namespace std;

int rec(int a, int sum = 0){

    if(a <= 0) return sum;
    int b = a % 10;
    a /= 10; 
    return rec(a, sum += b / 2);
}

int main(){

    int n;
    cin >> n;

    cout << rec(n);

    return 0;
}