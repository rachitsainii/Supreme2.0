#include<iostream>
#include<vector>
using namespace std;

int findOddOccuringElement(vector<int> v, int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start) / 2;
    while (start <= end){
        // Single Element
        if (start == end){
            return start;
        } 
        // Even and Odd Index for mid 
        if (mid & 1) { // True -> Odd Number
            if (mid - 1 >= 0 && v[mid-1] == v[mid]){
                start = mid + 1; // Right me jao
            } else {
                // Left me jao
                end = mid - 1;
            }
        } else {
            // Even 
            if (mid + 1 < n && v[mid] == v[mid+1]){
                // Right me Jao
                start = mid + 2;
            } else {
                // Ya toh mai right me khada hu
                // Ya toh mai answer ke upar khada hu
                // That's why e = mid kara hu;
                // Kyunki e = mid - 1 se answer lost ho sakta hai
                end = mid;
            }
        }

        mid = start + (end-start)/2;  
    }

    return -1;
}

int main(){

    vector<int> v = {1,1,5,5,2,2,3,3,4,4,2};
    int n = v.size();

    int ans = findOddOccuringElement(v,n);
    if (ans == -1){
        cout << "No such element" << endl;
    } else {
        cout << v[ans] << endl;
    }

    return 0;
}