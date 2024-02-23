#include<iostream>
#include<string>
using namespace std;

int main(){

    string s;
    cin >> s;
    int counter = 0;
    int counter1 = 0;

    for (char c : s){
        if ( c >= 'A' && c <= 'Z') counter++;
        else if(( c >= 'a' && c <= 'z')) counter1++;
     }
    cout << counter1<< " " << counter;
    return 0;
}