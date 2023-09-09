// Input -> 10, 20, 30, 40, 50, 60
// Output -> 10, 60, 20, 50, 30, 40;


#include<iostream>
using namespace std;

int main(){

    // int arr[6] = {10, 20, 30, 40, 50, 60};
    int arr[5] = {10, 20, 30, 40, 50};
    //int n = 6;
    int n = 5;
    int left = 0;
    int right = n-1;
    while(left <= right) {
        if (left == right) {
            cout << arr[left];
        } else {
        cout << arr[left] << " ";
        cout << arr[right] << " ";
        }
        left++;
        right--;
    }

    cout << endl;

    return 0;
}