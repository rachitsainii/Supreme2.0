// *
// * *
// * * *
// * * * *
// * * *
// * *
// *

#include<iostream>
using namespace std;

int main(){

   int n = 0;
   cin >> n;
   cout << endl;

    for (int i = 0; i < n/2+1; i++){
        for (int j = 0; j <= i; j ++){
            cout << "* ";
        }

        cout << endl;
    }

    for (int i = 0; i < n/2; i++){
        for (int j = 0; j <= (n/2)-i-1; j ++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}