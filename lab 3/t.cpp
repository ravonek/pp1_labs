#include<iostream>


using namespace std;

int main(){

    int a;
    cin >> a;
    int arr[a];

    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    
    int max = arr[0];
    int min = arr[0];
    
    for(int i = 0; i < a;i++){
        int n;
        n = arr[i];
        if( max < n ) max = n;
    }
        for(int i = 0; i < a;i++){
        int d;
        d = arr[i];
        if( min < d ) min = d;


    }

    cout >> max - min;



    return 0;
}