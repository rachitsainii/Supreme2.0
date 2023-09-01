#include<iostream>
using namespace std;

int main(){

    int n = 0;
    cin >> n ;
    cout << endl;
    for (int i = 1; i <= n; i ++){
        for (int j = 1; j <= i; j ++){
            if (i == 1 || i == 2 || i == n){
                cout << j << " ";
            } else if (i > 2 && i < n){
                if (j == 1 || j == i){
                    cout << j << " ";
                } else {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}