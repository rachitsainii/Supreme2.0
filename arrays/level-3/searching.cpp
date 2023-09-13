#include<iostream>
using namespace std;

bool findTarget(int arr[][3], int row, int col, int target){
    for(int i = 0; i < row; i++){
        for(int j =0; j < col; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}

int main(){

    int element = 100;
    int arr[3][3] = {{10,20,30},
                     {40,50,60}, 
                     {70,80,90}};
    
    int ans  = findTarget(arr, 3,3, element);
    cout << ans << endl;

    return 0;
}