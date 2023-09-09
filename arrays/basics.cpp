#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main(){

    int a[5];
    char c[10];
    bool flags[123];
    long num[50];
    short x[20];
    cout << "Array created successfully" << endl;

    int b = 5;
    cout << "Address of b is: "<< &b << endl;

    cout << "Address of a is: "<< a << endl;
    cout << "Address of a is: "<< &a << endl;

    cout << "Size of b is: "<< sizeof(b) << endl;
    cout << "Size of a is: "<< sizeof(a) << endl;

    // Array Initialisation
    //int arr [] = {1,2,3,4,5};
    int brr [5] = {1,2,3,4,5};
    int crr[5] = {1,2};
    // int drr[2] = {1,2,3,4,5} ; - Error.


    // Indexing
    int arr [] = {5,8,9,12,13};
    // cout << arr[0] << endl;
    // cout << arr[1] << endl;
    // cout << arr[2] << endl;
    // cout << arr[3] << endl;
    // cout << arr[4] << endl;

    // for (int i = 0; i < 5; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // Taking input in an array
    // int array[5];
    // for (int i = 0; i < 5; i++ ){
    //     cout << "Enter the value for index "<< i << endl;
    //     cin >> arr[i];
    // }

    //  for (int i = 0; i < 5; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;


    // P.S.

    // int z[10];
    // int sum = 0;
    // for (int i = 0; i < 10; i++){
    //     cin >> z[i];
    // }
    // for (int i = 0; i < 10; i++){
    //     z[i] = 2 * z[i];
    // }

    // for (int i = 0; i < 10; i++){
    //     cout << z[i] << " ";
    // }
    // cout << endl;

    // int arr[5];
    // int sum = 0;
    // for (int i = 0; i < 5; i++){
    //     cin >> arr[i];
    // }

    // for(int i = 0; i < 5; i++){
    //     sum += arr[i];
    // }

    // cout << sum << endl;

    printArray(arr, 5);

    return 0;
}