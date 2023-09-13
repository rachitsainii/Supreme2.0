#include<iostream>
using namespace std;

void diagonalSum(int arr[][3], int row, int col){
    int sum = 0;
    for(int i = 0; i < row; i++){
        sum += arr[i][i];
    }

    cout << sum << endl;
}

int main(){

    int arr[3][3] = {{10,20,30},
                     {40,50,60}, 
                     {70,80,90}};
    
    diagonalSum(arr,3,3);

    return 0;
}