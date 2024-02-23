#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    int a,b,c;
    cin >> a >> b >> c;
    int arr[] = {a,b,c};

  /*  for(int i = 0; i < a; i++){
        cin >> arr[i];
    } */

    sort(arr, arr + 3);
    reverse(arr, arr + 3);

    for(int i = 0; i < 3;i++){
        cout<< arr[i] << " ";
    }

    return 0;
}