#include<iostream>
using namespace std;

void OddEven(int n){
    if ((n & 1) == 0){
        cout << "The number is Even!" << endl; 
    } else {
        cout << "The number is Odd!" << endl;
    }
}

bool isPowerOfTwo(unsigned int x){
    return (!(x & (x-1)));
}

int main(){

    // OddEven(100000101);

    int ans = isPowerOfTwo(0);
    cout << ans << endl;


    return 0;
}