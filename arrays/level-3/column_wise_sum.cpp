#include<iostream>
using namespace std;

void colWiseSum(int arr[][3], int row, int col){
    for(int j = 0; j < col; j++){
        int sum = 0;
        for(int i = 0; i < row; i++){
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
}

int main(){

    int arr[3][3] = {{10,20,30},
                     {40,50,60}, 
                     {70,80,90}};
    
    colWiseSum(arr,3,3);

    return 0;
}