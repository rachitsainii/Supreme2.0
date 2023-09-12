#include<iostream>
using namespace std;

int main(){

    int n = 5;
    int &k = n;
    int &c = n;
    cout << "n: " << n << endl;
    cout << "k: " << k << endl; // Nick Name given to n
    cout << "c: " << c << endl; // Nick name given to n

    k++;

    cout << "n: " << n << endl;
    cout << "k: " << k << endl; 
    cout << "c: " << c << endl;

    // int &t = 6; // Error

    return 0;
}