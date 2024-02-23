#include<iostream>
using namespace std;

int main(){

    int a;
    cin >> a;
    int pos = 0;

    int array[a];

    for (int i = 0; i < a; i++){
            
            cin >> array[i];


    }
    for ( int i = 0; i < a; i++){

            if(array[i] > 0) pos++;
    }   

    cout << pos << endl;


    return 0;
}