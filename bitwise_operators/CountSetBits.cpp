#include<iostream>
using namespace std;

int countSetBits(int n){
    int count = 0;
    while (n != 0){
        n = n & (n-1);
        count  += 1;
    }

    return count;
}

int main(){

    int ans = countSetBits(1000);
    cout << ans << endl;

    return 0;
}