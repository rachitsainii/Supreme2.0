// 1   * _ _ _ _ _ _ *
// 2   * * _ _ _ _ * *
// 3   * * * _ _ * * *
// 4   * * * * * * * *
// 5   * * * _ _ * * *
// 6   * * _ _ _ _ * *
// 7   * _ _ _ _ _ _ *

#include<iostream>
using namespace std;

int main(){

    int num = 0;
    cin >> num;
    int n = num / 2;
    cout << endl;

    for (int i = 0; i < n+1; i++){
        for (int j = 0; j <= i; j++){
            cout << "* ";
        }

        for (int k = 0; k < (2*n - 2*i); k++){
            cout << "  ";
        }

        for (int l = 0; l <= i; l++){
            cout << "* ";
        }

        cout << endl;
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i; j++){
            cout << "* ";
        }

        for (int k = 0; k < 2*i + 2; k++){
            cout << "  ";
        }

        for (int l = 0; l < n-i ; l++){
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}