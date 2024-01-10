#include<iostream>
using namespace std;

int main() {
    string num1 = "998467", num2="5639";
    int index1=num1.size()-1, index2=num2.size()-1;
    int carry=0, sum=0;
    string ans;

    while(index2>=0) {
        sum = (num1[index1]-'0') + (num2[index2]-'0') + carry;
        carry = sum/10;
        char ch = '0' + sum%10;
        ans = ch + ans;
        index2--, index1--;
        // cout<<ans<<endl;
    }
    while(index1>=0) {
        sum = (num1[index1]-'0') + carry;
        carry = sum/10;
        char ch = '0' + sum%10;
        ans = ch + ans;
        index1--;
    }
    if(carry) {
        ans = '1'+ans;
    }
    // reverse(ans.begin(), ans.end());

    int temp = 998467 + 5639;
    cout<<"Expected Answer: "<<temp<<endl;
    cout<<"Actual Answer: "<<ans<<endl;
}