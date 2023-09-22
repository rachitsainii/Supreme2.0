#include<iostream>
#include<vector>
using namespace std;

int searchInANearlySortedArray(vector<int> v, int n, int target){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start) / 2;
    while (start <= end){
        if (mid - 1 >= 0 && v[mid-1] == target){
            return mid - 1;
        }
        if (v[mid] == target){
            return mid;
        }
        if (mid + 1 < n  && v[mid+1] == target){
            return mid + 1;
        } 
        if (target > v[mid]){
            start = mid + 2;
        } else {
            end = mid - 2;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

int main(){

    vector<int> v = {20, 10, 30, 50, 40, 70, 60};
    int n = v.size();
    int target = 20;

    int ans = searchInANearlySortedArray(v, n, target);
    if (ans == -1){
        cout << "Element not found !" << endl;
    } else {
        cout << "Element found at : " << ans << " index" << endl;
    }


    return 0;
}