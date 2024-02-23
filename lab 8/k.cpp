#include <iostream>
#include <vector>

using namespace std;

int rec(vector<int> &v, int x, int sum = 0, int i = 0) {

    if (i == x) {
        return sum;
    }

    int max = v[0];
    int place = 0;

    for (int j = 1; j < v.size(); j++) {
        if (v[j] > max) {
            max = v[j];
            place = j;
        }
    }

    v.erase(v.begin() + place);

    sum += max;
    i++;

    return rec(v, x, sum, i);
}

int main() {
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    int x;
    cin >> x;

    cout << rec(v, x) << endl;

    return 0;
}
