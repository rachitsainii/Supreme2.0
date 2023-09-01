#include<iostream>
using namespace std;

int main(){

    int num = 0;
    cin >> num;
    int n = num / 2 ;
    cout << endl;

    // Upper Half
    for (int i = 0; i < n; i++){

        // Inverted Pyramid 1
        for (int j = 0; j < n-i; j++){
            cout << "*";
        }

        // Full Pyramid 1
        for (int k = 0; k < 2*i+1; k++){
            cout << " ";
        }

        //Inverted Pyramid 2
        for (int l = 0; l < n-i; l++){
            cout << "*";
        }
        cout << endl;
    }


    // Lower Half
    for (int i = 0; i < n; i++){

        // Inverted Pyramid 1
        for (int j = 0; j < i+1; j++){
            cout << "*";
        }

        // Full Pyramid 1
        for (int k = 0; k < 2*n-2*i-1; k++){
            cout << " ";
        }

        //Inverted Pyramid 2
        for (int l = 0; l < i+1; l++){
            cout << "*";
        }
        cout << endl;
    }

    

    return 0;
}