//      1
//     1 1
//    1 2 1
//   1 3 3 1
//  1 4 6 4 1
// 1 5 10 10 5 1

#include<iostream>
using namespace std;

int main(){

    int n = 0;
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++){
        int C = 1;
        for (int j = 0; j < n-i-1; j++){
            cout << " ";
        }

        for (int k = 0; k <= i; k++){
            cout << C << " ";
            C = C*(i-k) / k;
        }

        cout << endl;
    }

    return 0;
}