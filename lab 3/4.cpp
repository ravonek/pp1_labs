#include<iostream>
using namespace std;

int main(){

    int a;
    int max;
    int maxPos;
    cin >> a;
    
    int array[a];
    


    for (int i = 0; i < a; i++){
            
            
            cin >> array[i];



    }
        max = array[0];
        maxPos = 0;

    for ( int i = 1; i < a; i++){

            int a;
            a = array[i];
            
        
            if(a > max) {
                max = a;
                maxPos = i;

    }   
    }

    cout<< maxPos + 1;

    return 0;
}