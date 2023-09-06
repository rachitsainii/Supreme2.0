#include<iostream>
using namespace std;

float areaOfCircle(float r){
    float pi = 3.14;
    float area = 2*pi*r;
    return area;
}

void evenOdd(int n){
    if (n % 2 == 0){
        cout << "The number is Even." << endl;
    }  else {
        cout << "The number is Odd." << endl;
    }
}

int factorial(int n){
    if (n == 1){
        return 1;
    } else {
        return n*factorial(n-1);
    }
}

bool checkPrime(int n){
    if (n == 2){
        return 1;
    } else {
        for (int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
            } 
        }
    }
    return 1; 
}

void printAllPrimes(int n){
    for (int i = 2; i <= n; i++){
        if (i == 2){
            cout << i << " ";
        } else {
            int flag = 0;
            for (int j = 2; j < i; j++){
                if (i % j == 0){
                    flag = 1;
                    break;
                }
            }
            if (flag == 0){
                cout << i << " ";
            }
        }
    }
}

int reverseInteger(int n){
    int rev_num = 0;
    while(n > 0){
        int rem = n % 10;
        rev_num = rev_num*10 + rem;
        n = n / 10;
    }

    return rev_num;
}


// Leetcode Problem

// class Solution {
// public:
//     vector<double> convertTemperature(double celsius) {
//         vector<double> ans;
//         double kelvin = celsius + 273.15;
//         double f = (celsius*1.80) + 32.00;
//         ans.push_back(kelvin);
//         ans.push_back(f);
//         return ans;
//     }
// };


int main(){

    float ans_problem1 = areaOfCircle(5);
    cout << ans_problem1 << endl;

    evenOdd(67);

    int ans_problem_3 = factorial(5);
    cout << ans_problem_3 << endl;

    bool ans_problem_4 = checkPrime(49);
    cout << ans_problem_4 << endl;

    printAllPrimes(50);
    cout << endl;

    int ans_problem_6 = reverseInteger(12345678);
    cout << ans_problem_6 << endl;

    return 0;
}