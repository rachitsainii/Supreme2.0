#include<iostream>
using namespace std;

int main(){

    int n = 0;
    cin >> n;
    cout << endl;

    for(int i = 1; i <= n; i++){
        for(int j = i; j <=n; j++ ){
            if (i == 1 || i == (n-1) || i == n){
                cout << j << "";
            } else {
                if (j == i || j == n){
                    cout << j << "";
                } else {
                    cout << " ";
                }
            }
        }

        cout << endl;
    }

    return 0;
}