#include<iostream>
using namespace std;

int main(){

    int a;
    long long sum = 0;
    cin >> a;
    
    int array[a];
    


    for (int i = 0; i < a; i++){
            
            
            cin >> array[i];    
            sum += array[i];


    }   

    cout <<sum;


    return 0;
}