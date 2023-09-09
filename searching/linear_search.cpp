#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int target = 11;
    int flag = 0;

    for (int i = 0; i < 10; i ++){
        if (arr[i] == target){
            flag = 1;
            cout << target << " found at " << i << "th index." << endl;
            break;
        } else {
            continue;
        }
    }
    if (flag == 0){
        cout << target << " not found the array." << endl;
    }

    return 0;
}