#include<iostream>
using namespace std;

int divideGivenNumbers(int a, int b){
    int start = 0;
    int end = a;
    int mid = start + (end - start) / 2;
    int ans = 0;
    while (start <= end){
        if (mid * b == a){
            return mid;
        } else if (mid * b > a){
             end = mid - 1;
        } else {
            ans = mid;
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

int main(){

    int a = 35;
    int b = 1;
    int quotient = divideGivenNumbers(abs(a), abs(b));
    // IS TIME PR CHECK KARLO KI ANSWER +ve hai ya -ve (Based on sign of dividend and divisor)
    if ((a > 0 && b > 0) || (a < 0 && b < 0)){
        cout << quotient << endl;
    } else {
        cout << -1 * quotient << endl;
    }
    

    return 0;
}