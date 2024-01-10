#include<iostream>
#include<vector>
using namespace std;

int main() {
    string s1 = "edcab";
    string s2 = "eabcabd";

    // Insertion Sort


    // Selection Sort


    // Bubble Sort


    // Sorting in O(n) complexity using an array to check count of each letter.
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    vector<int>alpha(26, 0);
    int index;
    string ans;

    for(int i=0; i<s2.size(); i++) {
        index = s2[i]-'a';
        alpha[index]++;
    }

    for(int i=0; i<26; i++) {
        char c = 'a' + i;
        while(alpha[i]) {
            ans += c;
            alpha[i]--;
        }
    }
    cout<<ans<<endl;

    // Solvin the above using O(1) space.
}