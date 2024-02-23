#include<iostream>

using namespace std;

void foo(string s, int i = 0,int counter = 0)
{
    if(s.size() == i){
        
        cout << counter;
        return;
    }

    else{
    
        char c = s[i];
        int a = c - '0';
        if(a % 2 == 0) counter++;
        return foo(s, i + 1, counter);
    }

}


int main(){

    string s;

    cin >> s;

    foo(s);


    return 0;
}