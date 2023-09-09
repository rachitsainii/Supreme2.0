#include<iostream>
using namespace std;

void OddEven(int n){
    if ((n & 1) == 0){
        cout << "The number is Even!" << endl; 
    } else {
        cout << "The number is Odd!" << endl;
    }
}

int countAllSetBits(int n){
    int count = 0;
    while (n > 0){
        n = n & (n-1);
        count ++;
    }

    return count;
}

int main(){

    // OddEven(100000101);

    int ans = countAllSetBits(9);
    cout << ans << endl;


    return 0;
}