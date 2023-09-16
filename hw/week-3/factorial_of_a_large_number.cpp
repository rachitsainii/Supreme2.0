#include<iostream>
#include<vector>
using namespace std;

int main(){

        int n = 50; // Find it's factorial (Store each digit in a cell of an array)
        vector<int> ans(1,1);
        
        int digit = 0;
        for(int i = 2; i <= n; i++){
            int carry = 0;
            for(int j = 0; j < ans.size(); j++){
                int x = ans[j]*i + carry;
                ans[j] = x % 10;
                carry = x / 10;
                
            }

            ans.push_back(digit);

            while(carry){
                ans.push_back(carry % 10);
                carry = carry/10;
            }

        }  
        int i = ans.size()-1;
        while(ans[i--] == 0){
            ans.pop_back();
        } 

        reverse(ans.begin(), ans.end()); 
        for(auto it:ans){
                cout << it << "";
            }
            cout << endl;    

    return 0;
}