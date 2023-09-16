#include<iostream>
#include<vector>
using namespace std;

int returnFirstOccurrence(vector<int> v, int n, int target){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans  = -1;
    while(start <= end){
        if(v[mid] == target){
            ans = mid;
            end = mid - 1;
        } else if (target > v[mid]){
            start = mid + 1;
        } else {
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }

    return ans;
}

int returnLastOccurrence(vector<int> v, int n, int target){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans  = -1;
    while(start <= end){
        if(v[mid] == target){
            ans = mid;
            start = mid + 1;
        } else if (target > v[mid]){
            start = mid + 1;
        } else {
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }

    return ans;
}

int main(){

    vector<int> v = {10,20,30,30,30,30,40,50};
    int target = 30;
    int n = v.size();

    int lastOccurence = returnLastOccurrence(v,n,target);
    int firstOccurence = returnFirstOccurrence(v,n,target);
    int totalOccurence = lastOccurence - firstOccurence + 1;
    cout << totalOccurence << endl;
    
    return 0;
}