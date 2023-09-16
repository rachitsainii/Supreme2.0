#include<iostream>
#include<vector>
using namespace std;

int peakIndexMountainArray(vector<int> v, int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    while(start < end){
        if (v[mid] < v[mid+1]){
            // A waali line mei
            // Peak right me exist karta hai
            start = mid + 1;
        } else {
            // Ya to mai B line pr hu
            // Ya mai peak element par hu
            end = mid;
        }
        
        mid = start + (end - start)/2;
    }

    return start;
}

int main(){

    vector<int> v = {10,20,50,40,30};
    int n = v.size();

    int peakIndex = peakIndexMountainArray(v,n);
    cout << peakIndex << endl;

    return 0;
}