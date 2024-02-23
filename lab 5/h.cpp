#include <iostream> 

using namespace std; 

int main(){
    string s;
    cin >> s;
    int a[10];
    int m;
    for(int i = 0 ; i < 10 ; i++){
        a[i] = 0;
    }
    for(int i = 0 ; i < s.size(); i++){
        int x = s[i] - 48;
        a[x]++;
        m = a[x];
    }
    bool boller = false;
    for(int i = 0 ; i < 10; i++){
        if(a[i] == m || a[i] == 0){
            boller = true;
        }
        else{
            boller = false;
            break;
        }
    }
    if(boller){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}