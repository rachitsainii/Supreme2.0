#include<iostream>
#include<vector>
using namespace std;

int findPivot(vector<int> v, int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;

    while (start <= end){
        if (start == end){
            return start;
        } else {
            if (mid - 1 >= 0 && v[mid] < v[mid-1]){  // Yaha mai galti karunga
            return mid - 1;
        } else if (mid+1 < n && v[mid] > v[mid+1]){ // Yaha mai galti karunga
            return mid;
        } else if (v[start] > v[mid]){
            end = mid - 1;
        } else {
            start = mid + 1;
        }
        }

        mid = start + (end-start)/2;
    }

    return -1;
}

int binarySearch(vector<int> v, int start, int end,  int target){
    int mid = start + (end-start)/2;
    while(start <= end){
        if(v[mid] == target){
            return mid;
        } else if (target > v[mid]){
            start = mid + 1;
        } else {
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }

    return -1;
}

int search(vector<int> v, int n, int target){
    int pivotIndex = findPivot(v,n);
    int ans = -1;
    // Search in A
    if (target >= v[0] && target <= v[pivotIndex]){
        ans = binarySearch(v, 0, pivotIndex, target);
    } else {
        ans = binarySearch(v, pivotIndex+1, n-1, target);
    }

    return ans;
}

int main(){

    vector<int> v = {1,3};
    int n = v.size();

    int ans = search(v, n, 3);
    cout << ans << endl;


    return 0;
}