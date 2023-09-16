#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> v, int n, int target){
    int start = 0;
    int end = n-1;
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

int main(){

    vector<int> v = {10,20,30,40,50,60,70,80,90};
    int target = 100;
    int n = v.size();

    int ansIndex = binarySearch(v,n,target);
    if (ansIndex == -1){
        cout <<  "Element not found !" << endl;
    } else {
        cout << "Element found at " << ansIndex << "th index." << endl;
    }

    return 0;
}