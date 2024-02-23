#include <iostream>

using namespace std;

int main() {
    int N, M;

    cin >> N;
    cin >> M;

    int minApplesPerFriend = M / N;

    int remainder = M % N;

    cout << remainder << endl;

    return 0;
}
