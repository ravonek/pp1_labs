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
    -        if ((i + j + 1) % 2 == 0) a -= 1;
            else a += 1;
            cout << a << "\t";
            
        }
           cout << endl;
    }




    return 0;
}