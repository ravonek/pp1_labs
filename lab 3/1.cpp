        #include<iostream>
using namespace std;


int main(){
    
        int n;
        cin >> n;
        int array[n];

        for( int i = 0; i < n; i++){

                int a;
                cin >> a;
                array[i] = a;
                if(a % 2 != 0 ) cout << a << " ";
        
                
        }

    

        return 0;
}