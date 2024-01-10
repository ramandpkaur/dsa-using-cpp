#include<iostream>
#include<vector>
using namespace std;

int main() {
    string s="aabbcAAABccdCDD";
    vector<int>lower(26,0);
    vector<int>upper(26,0);

    for(int i=0; i<s.size(); i++) {
        if(s[i] >='a' && s[i] <= 'z') {
            lower[s[i]-'a']++;
        }
        else    
            upper[s[i]-'a']++;
    }

    int count=0;    
    bool anyOdd = false;
    for(int i=0; i<26; i++) {
        if(lower[i]%2 == 0)
            count += lower[i];
        else {
            count += lower[i]-1;
            anyOdd = true;
        }
        if(upper[i]%2 == 0)
            count += lower[i];
        else {
            count += lower[i]-1;
            anyOdd = true;
        }
    }
    if(anyOdd) 
        count++;
    
    cout<<"Longest Palindrome size: "<<count<<endl;
}