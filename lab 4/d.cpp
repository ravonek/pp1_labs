#include <iostream>

using namespace std;

int main() {
    int size;
    cin >> size;  
    

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {

            cout << ((i == 0 || j == 0) ? i + j : i * j) << " ";
        }
        cout << endl;  
        
    }

    return 0;
}
