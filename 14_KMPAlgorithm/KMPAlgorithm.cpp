// To find the longest prefix which is also the longest suffix
// Time Complexity: O(n)
// Space Complexity: O(n)

#include<iostream>
#include<vector>
using namespace std;

int main() {
    string s = "abcabdabcabcabcabd";
    vector<int>lps(s.size(), 0);
    int pre=0, suf=1;

    while(suf<s.size()) {
        if(s[pre]==s[suf]) {
            lps[suf] = pre+1;
            suf++, pre++;
        }
        else {
            if(pre==0) {
                lps[suf]=0;
                suf++;
            }
            else {
                pre = lps[pre-1];
            }
        }
    }

    cout<<"Longest Prefix Suffix is: "<<lps[suf-1]<<endl;
}