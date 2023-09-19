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
            if (v[mid] < v[mid-1]){
            return mid - 1;
        } else if (v[mid] > v[mid+1]){
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

int main(){

    vector<int> v = {12,14,16,2,4,6,8,10};
    int n = v.size();

    int pivotIndex = findPivot(v,n);
    cout << pivotIndex << endl;


    return 0;
}