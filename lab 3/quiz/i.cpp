#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int hours, min, sec;

    hours = n / 3600;
    n %= 3600;

    min = n / 60;
    n %= 60;



    sec = n;
 if(hours < 10 && min < 10){
    cout <<"0"<< hours << ":" << "0" << min << ":" << sec << endl;
 }
 else {
        cout << hours << ":" << min << ":" << sec << endl;

 }

    return 0;
}
