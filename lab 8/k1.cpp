#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

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

    int sum = 0;

    while (x > 0 && !v.empty()) {
        int maxIt = max_element(v.begin(), v.end());
        int max = *maxIt;
        sum += max;
        v.erase(maxIt);
        x--;
    }

    cout << sum << endl;

    return 0;
}
