#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main (){

    string s, s1;
    cin >> s >> s1;
    sort(s.begin(),s.end());
    sort(s1.begin(),s1.end());
    s == s1 ? cout << "YES" : cout << "NO";


    return 0;
}