#include<iostream>
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

    int place, element;

    cin >> place >> element;

    v.insert(v.begin() + place, element);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }    


    

    return 0;
}