// Convert 1.1.1.1 IP Address to 1[.]1[.]1[.]1 format
// Time Complexity: O(n)
// Space Complexity: O(n)

#include<iostream>
using namespace std;

int main() {
    string  s = "255.0.1.192";
    int index = 0;
    string ans;

    while(index < s.size()) {
        if(s[index] == '.') {
            ans += "[.]";
        }
        else    
            ans.push_back(s[index]);
        index++;
    }
    cout<<ans<<endl;
}