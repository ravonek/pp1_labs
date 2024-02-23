    #include <iostream>

    using namespace std;

    int main() {
        int n, m;

        
        
        cin >> n >> m;

        int minocenka = 999999; 
        
        int minpos = 0;     
        

        for (int i = 0; i < n; i++) {
            int overallocenka = 0;

            for (int j = 0; j < m; j++) {
                int ocenka;
                cin >> ocenka;
                overallocenka += ocenka;
            }

            if (overallocenka < minocenka) {
                minocenka = overallocenka;
                minpos = i + 1; 
            }
        }

        
        
        cout << minpos << endl;

        return 0;
    }
