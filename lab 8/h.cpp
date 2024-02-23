#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> sequence;

    for (int i = 0; i < n; i++) {
       
        int a;
        cin >> a;
       
        sequence.push_back(a);
    }

    int k;
    cin >> k;

    sort(sequence.begin(), sequence.end());

    for (int i = 0; i < k; i++) {
        cout << sequence.at(i) << " ";
    }

    return 0;
}
