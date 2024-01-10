// Longest substring without repeating character
#include<iostream>
#include<vector>
using namespace std;

int main() {
    // We can use Brute Force approach and find all the possible substrings and then compare the characters present in each one.
    // Time Complexity for this will be O(n^3) where n is size of the string.

    // Optimum Approach: Sliding Window Protocol
    // Time Complexity: O(n) where n is size of the string

    string s = "ababc";
    int length=0;
    vector<bool>ch(256, 0);
    int first=0, second=0;

    while(second < s.size()) {
        int letter = s[second];
        if(!ch[letter]) {
            ch[letter] = 1;
            if(length <= (second-first)) 
                length++;
            second++;
        }
        else {
            while(ch[letter]) {
                int alpha = s[first];
                ch[alpha] = 0;
                first++;
            }
        }
    }
    cout<<"Longest substring: "<<length<<endl;
    for(int i=first; i<=second; i++) {
        cout<<s[i];
    }
}