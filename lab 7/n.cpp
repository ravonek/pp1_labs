#include <iostream>
#include<algorithm>

using namespace std;

bool isCheater(int arr[], int size, int target, int i = 0){

    if (i == size - 1) return false;
    else 
    {
    int dif = arr[i + 1] - arr[i];
    
    if(dif <= target){
        
         return true;
    
    }
    
    else return isCheater(arr, size, target, i + 1);

    }
}

int main(){

    int size, target;

    cin >> size >> target;

    int arr[size];

    for(int i = 0; i < size; i++){

        cin >> arr[i];
    }

    sort(arr, arr + size);

    bool result = isCheater(arr, size, target);

    result ? cout << "cheater" : cout <<"no";

    return 0;
}