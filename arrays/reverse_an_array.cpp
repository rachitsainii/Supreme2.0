#include<iostream>
using namespace std;

int main(){

    //int arr[6] = {1,2,3,4,5,6};
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    int rev_arr[6];
    // Output = 6, 5, 4, 3, 2, 1

    // Approach 1
    // for (int i = 0; i < n; i++){
    //     rev_arr[i] = arr[n-i-1];
    // }

    // for(int j = 0; j < 6; j++){
    //     cout << rev_arr[j] << " ";
    // }

    // cout << endl;

    // Approach 2 - Swap

    int left = 0;
    int right = n-1;
    while(left <= right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}