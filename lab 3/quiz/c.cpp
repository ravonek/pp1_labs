
#include<iostream>
using namespace std;

int main(){

    int a;
    cin >> a;
    int array[a];

    for(int i = 0;i < a; i++){
            cin >> array[i];

    }

    int max = array[0];
    int min = array[0]; 
    
    for(int i = 0;i < a; i++){
            int m;
            m = array[i];
            if ( max < m ) max = m;
    }


    for (int i = 0; i < a; i++ ){
            int n;
            n = array[i];
            if ( min > n ) min = n;
    } 

        int res = max & min;
    cout << res;

    return 0;
}