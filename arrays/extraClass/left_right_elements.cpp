#include<iostream>
#include<vector>
using namespace std;

// Using A second array .
// int main(){

//     vector<int> arr = {23, -7, 12, -10, -11, 40, 60};

//     int n = 7;

//     vector<int> ans_array;

//     for (int i = 0; i < n; i++){
//         if (arr[i] < 0){
//             ans_array.push_back(arr[i]);
//         }
//     }

//     for(int j = 0; j < n; j++){
//         if(arr[j] >= 0){
//             ans_array.push_back(arr[j]);
//         }
//     }

//     for (auto it:ans_array){
//         cout << it << " ";
//     }
//     cout << endl;

//     return 0;
// }


// Using two-pointer approach
int main(){

    vector<int> arr = {23, -7, 12, -10, -11, 40, 60};

    int n = arr.size();
    int j = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] >= 0){
            continue;
        } else {
            swap(arr[j], arr[i]);
            j++;
        }
    }

    for(auto it:arr){
        cout << it << " ";
    }

    cout << endl;


    return 0;
}
