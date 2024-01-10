#include<iostream>
#include<vector>
using namespace std;
// Time Complexity: O(N)
// Space Complexity:  
int main() {
    string s = "lEetcOde";
    vector<int>lower(26, 0);
    vector<int>upper(26, 0);

    for(int i=0; i<s.size(); i++) {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') {
            lower[s[i]-'a']++;
            s[i] = '#';
        }
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') {
            upper[s[i]-'A']++;
            s[i] = '#';
        }
    }

    string sorted;

    for(int i=0; i<26; i++) {
        char ch = 'A'+i;
        while(upper[i]) {
            sorted += ch;
            upper[i]--;
        }
    }
    for(int i=0; i<26; i++) {
        char ch = 'a'+i;
        while(lower[i]) {
            sorted += ch;
            lower[i]--;
        }
    }

    string ans;
    int index=0;
    for(int i=0; i<s.size(); i++) {
        if(s[i]=='#') {
            ans += sorted[index];
            index++;
        }
        else 
        ans += s[i];

    }

    cout<<ans<<endl;
    
}