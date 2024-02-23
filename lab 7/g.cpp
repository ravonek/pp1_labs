#include<iostream>

using namespace std;


int Fact(int a){

    if(a == 0) return 1;

    if(a == 1) return 1;

    return a * Fact(a - 1);
}

int main(){

    int n;
    cin >> n;

    cout << Fact(n);

    return 0;

}