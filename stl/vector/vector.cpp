#include<iostream>
#include<vector>
using namespace std;

void printElements(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

void printVector(vector<int> v){
    int size = v.size();
    for (int i = 0; i < size; i++){
        cout << v[i] << " ";
    }

    cout << endl;
}

int main(){

    // // Static Mem allocation of an array
    // int arr[5] = {1,2,3,4,5};
    // printElements(arr,5);

    // // Dynmaic Mem Allocation of an array
    // int n = 0;
    // cin >> n;
    // int * array = new int[n]; // Each elements would be 0 or garbage.
    // // Taking n elements in input and inserting in the array.
    // for (int i=0; i<n; i++){
    //     int data;
    //     cin >> data;
    //     array[i] = data;
    // }
    // printElements(array, n);


    // In vector, don't tell the size of vector, just keep inserting.
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    printVector(v);

    // POP
    v.pop_back();
    printVector(v);
    v.pop_back();
    printVector(v);

    // Clear the vector
    v.clear();
    printVector(v);


    vector<int> arr; // Default with no data and size = 0;
    vector<int> arr2(5,-1); // init with size= 5 and each having value -1
    printVector(arr2);
    vector<int> arr3 = {1,2,3,4,5};
    arr3.pop_back();
    printVector(arr3);


    // Copy Vector
    vector<int> arr5 = {1,2,3,4,5,6};
    vector<int> arr6 = arr5;
    printVector(arr6);

    // Different types of Vectors
    vector<char> c;
    c.push_back('a');
    c.push_back('b');
    c.push_back('c');
    cout << "Front Element: " << c[0] << endl; // v.front()
    cout << "Last Element: " << c[c.size()-1] << endl; // v.back()

    for(auto it:c){
        cout << it << " ";
    }
    cout << endl;




    return 0;
}