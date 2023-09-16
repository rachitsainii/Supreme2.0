#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr = {-1,1};
    int n = arr.size();
    int j = 1;
    for (int i = 0; i < n; i++){
        if(arr[i] >= 0){
            continue;
        } else {
            swap(arr[i], arr[j]);
            if(j+2 < n){
                 j +=  2;
            } else {
                break;
            }
           
        }
    }

    for(auto it:arr){
        cout << it << " ";
    }

    cout << endl;

    return 0;
}





// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//         int n = nums.size();
//         int j = 1;
//         vector<int> positive;
//         vector<int> negative;
//         for (int i = 0; i < n; i++){
//             if(nums[i] >= 0){
//                 positive.push_back(nums[i]);
//             } else {
//                 negative.push_back(nums[i]);
//             }
//         } 
//         nums.clear();
//         int k = 0;
//         int l = 0;
//         for(int i = 0; i < n; i++){
//             if (i %2 == 0){
//                 nums.push_back(positive[k]);
//                 k++;
//             } else {
//                 nums.push_back(negative[l]);
//                 l++;
//             }
//         }
//         return nums;
//     }
// };