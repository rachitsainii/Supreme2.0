// * * * * * * * * 1 * * * * * * * *
// * * * * * * * 2 * 2 * * * * * * * 
// * * * * * * 3 * 3 * 3 * * * * * *
// * * * * * 4 * 4 * 4 * 4 * * * * * 
// * * * * 5 * 5 * 5 * 5 * 5 * * * *

#include<iostream>
using namespace std;

int main(){

    int n = 0;
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < (2*n)-(i)-2; j++){
            cout << "* ";
        }

        for (int k = 1; k <= 2*i + 1; k++) {
            if (k % 2 != 0){
                cout << i+1 << " ";
            } else {
                cout << "* ";
            }
        }

        for (int l = 0; l < (2*n)-(i)-2; l++){
            cout << "* ";
        }
        
        cout << endl;
    }

    return 0;
}