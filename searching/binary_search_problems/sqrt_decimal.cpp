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

double MorePrecison(int x, int decimal_places, int tempSol) {
    double factor = 1;
    double ans = tempSol;
    for(int i = 0; i < decimal_places; i++){
        factor = factor / 10;
        for (double j = ans ; j*j < x; j=j+factor){
            ans = j;
        }
    }

    return ans;

}

int main(){

    int x = 2;
    int decimal_places = 3;
    int tempSol = squareRoot(x);
    cout << MorePrecison(x, decimal_places, tempSol) << endl;



    return 0;
}