#include<iostream>
#include<vector>
using namespace std;

int findMissingElement(vector<int> v, int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start <= end){
        int diff = v[mid] - mid;
        if (diff == 1){
            // Right me jao
            start = mid + 1;
        } else {
            // Ans store
            ans = mid;
            // Left me jao
            end = mid - 1;
        }


        mid = start + (end - start)/2;
    }

    // HW -> How can we remove this, by modifying the above logic.
    if (ans+1 == 0){
        return n+1;
    }

    return ans+1;
}

int main(){

    vector<int> v = {1,2,3,4,6,7,8,9};
    int n = v.size();

    int missingElement = findMissingElement(v,n);
    cout << missingElement << endl;
    

    return 0;
}