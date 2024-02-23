#include <iostream>
#include <string>
using namespace std;

int main(){

    string s;
    char a;
    int n;
    cin >> s >> a >> n;
    int counter = 0;

    int size = s.size();
    for(int i = 0; i < size; i++){

        if(s[i] == a)counter++;
    }
    counter == n ? cout << "YES" : cout << "NO";


    return 0;
}