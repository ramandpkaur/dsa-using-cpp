// To find the factorial of a number without integer overflow issue

#include<iostream>
#include<vector>
using namespace std;

int main() {
    int num = 15;
    vector<int>ans(1,1);
    int carry, n;

    while(num > 1) {
        // reset the value in carry
        carry=0;

        for(int i=0; i < ans.size(); i++) {
            n = ans[i]*num + carry;
            ans[i] = n%10;
            carry = n/10;                
        }
        while(carry) {
            ans.push_back(carry%10);
            carry /= 10;
        }

        num--;
    }

    // reverse(ans.begin(), ans.end());

    for(int i=ans.size()-1; i>=0; i--) {
        cout<<ans[i];
    }
    cout<<endl;

}