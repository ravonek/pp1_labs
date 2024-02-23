#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    int distance_cat1 = abs(z - x); 
    int distance_cat2 = abs(z - y);  
    if (distance_cat1 < distance_cat2) {
        cout << "1";  
    } else if (distance_cat2 < distance_cat1) {
        cout << "2"; 
    } else {
        cout << "3";  
    }

    return 0;
}
