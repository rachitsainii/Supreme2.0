#include<iostream>
using namespace std;

void printArray(int arr[][4], int row, int col){
    for(int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void printArrayColumnWise(int arr[][4], int row, int col){
    for(int j = 0; j < col; j++){
        for(int i = 0; i < row; i++){
            cout<< arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){

    int a[5][10];
    int b[2][4] = {
                  {10, 20, 30, 40},
                  {50, 60, 70, 80}
                  };

    int c[][4] = {
                {1,2,3,11},
                {4,5,6,12},
                {7,8,9,13}
    }; // Need to specify atleast the size of columns.

    int row = 3;
    int col = 4;
    printArray(c,3,4);
    printArrayColumnWise(c, 3, 4);

    // Input in a 2D array
    int arr[3][3];
    int r = 3;
    int column = 3;
    for(int i = 0; i< r; i++){
        for(int j = 0; j < column ; j++){
            cout << "Enter the input for row index: " << i << " column index " << j << endl;
            cin >> arr[i][j];
        }
    }

    return 0;
}