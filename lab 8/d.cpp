#include <iostream>
#include<vector>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {   
        int a;
        cin >> a;
        v.push_back(a);
    
    }

    int del;
    cin >> del;

    v.erase(v.begin() + del);

    for (int i = 0; i < v.size(); i++)
    {   
        cout << v.at(i) << " ";
    }

    return 0;
}