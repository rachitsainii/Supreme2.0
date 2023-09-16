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

int main(){

    vector<int> v = {10,20,30,30,30,30,40,50};
    int target = 30;
    int n = v.size();

    int firstOccurence = returnFirstOccurrence(v,n,target);
    if (firstOccurence == -1){
        cout << "Element not found!" << endl;
    } else {
        cout << "Element " << target << " has it's first occurence at : " << firstOccurence << " index." << endl;
    }
    
    return 0;
}