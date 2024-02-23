#include<iostream> 
using namespace std;

int main(){ 
        int guests;
        cin >> guests;
        int p;
        if ( guests > 1 && guests %2!= 0){
            p = guests;
        }
        else if(guests>1 && guests % 2 == 0) {
             p = guests / 2;
        }
       /* else {
            p = 0;
        }*/
        cout << p;





    return 0;
}
