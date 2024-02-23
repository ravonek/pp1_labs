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

    int max = v.at(0);
    int min = max;

    for (int i = 0; i < v.size(); i++)
    {
        int a = v.at(i);

        if(max < a) max = a;
        if(min > a) min = a;
     }

    cout << max - min;

    return 0;
}