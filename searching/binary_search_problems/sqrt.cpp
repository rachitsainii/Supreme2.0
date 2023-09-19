#include<bits/stdc++.h>
using namespace std;

int squareRoot(int x){
    int start = 0;
    int end = x;
    int mid = start + (end - start)/2;
    int ans = 0;
    while (start <= end){
        if (mid * mid > x){
            end = mid - 1;
        } else if (mid * mid <= x){
            ans = mid;
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

int main(){

    int x = 81;
    int square_root = squareRoot(x);
    cout << square_root << endl;

    return 0;
}