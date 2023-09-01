#include<iostream>
using namespace std;

int main(){

    int n = 0;
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            cout << " ";
        }

        for (int k = 0; k < n-i; k++){
            if (k == 0 || k == n-i-1){
                 cout << "* ";
            } else {
                cout << "  ";
            }
           
        }

        cout << endl;
    }

    return 0;
}