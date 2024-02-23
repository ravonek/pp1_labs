#include<iostream>
using namespace std;

int main(){
    int element;

    cin>>element;
    int massive[element];
    int sum = 0;
    for(int i = 0; i < element; i++){
            int z;
            cin >> z;
            massive[i] = z;
             
            
            }
           for (i = 1; i < size; i++){
             if( massive[i] > massive[i-1]){
                    ++sum; 
             }
            
            
    }
    cout << sum ;

    return 0;
}

    

