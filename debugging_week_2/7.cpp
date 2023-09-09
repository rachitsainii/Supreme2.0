/*
Pattern for N = 5
1234554321
1234**4321
123****321
12******21
1********1
*/

#include<iostream>
using namespace std;

int main(){

    int n = 5;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i; j++){
            cout << j+1;
        }

        for (int k = 0; k < 2*i; k++){
            cout << "*";
        }

        for (int l = n-i; l > 0; l--){
                cout << l;
        }

        cout << endl;
    }
}