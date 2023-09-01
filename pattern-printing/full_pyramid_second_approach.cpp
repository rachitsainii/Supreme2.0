#include<iostream>
using namespace std;

int main(){

    int n = 0;
    cin >> n;

    cout << endl;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1; j++){
            cout << " ";
        }

        for (int k = 0; k < i+1; k++){
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}