    #include <iostream>

    using namespace std;

    int main() {
        int n, m;

        cin >> n >> m;      

        int arr[n][m]; 

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }

        int rowSum[n] = {0}; 
        int colSum[m] = {0}; 

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                rowSum[i] += arr[i][j];
                colSum[j] += arr[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            cout << "The sum of row number " << i + 1 << " is " << rowSum[i] << endl;
        }

        for (int j = 0; j < m; j++) {
            cout << "The sum of column number " << j + 1 << " is " << colSum[j] << endl;
        }

        return 0;
    }
