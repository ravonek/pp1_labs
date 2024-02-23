#include<iostream>
#include<cmath>
using namespace std;

int main(){

    long long raw, col;
    cin >> raw >> col;
    long long arr[raw][col];

    for(int i = 0; i < raw; i++)
    {
        for (int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }

     for(int i = 0; i < raw; i++)
    {
        for (int j = 0; j < col; j++){

            int a = arr[i][j];
            int b = sqrt(a);
            if ( a == b * b) a = b;
            cout << a << " ";
            
        }
           cout << endl;
    }




    return 0;
}