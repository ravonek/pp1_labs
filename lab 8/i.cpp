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

    int target;
    cin >> target;

    bool isFound = false;

    for (int i = 0; i < v.size(); i++)
    {
        int a = v.at(i);
        if(a == target)
        {
             isFound = true;
             break;
        }
    }

    isFound ? cout << "Yes" : cout << "No";

    

    return 0;
}