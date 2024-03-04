// Finding the substring in the given string
#include<iostream>
#include<vector>
using namespace std;

vector<int> findLps(string s) {
    vector<int>lps(s.size(), 0);
    int pre=0, suf=1;

    while(suf<s.size()) {
        if(s[pre]==s[suf]) {
            lps[suf]=pre+1;
            pre++, suf++;
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
    return lps;

}
int main() {
    string haystack="abacdabad";
    string needle = "abad";
    int size=haystack.size(), subsize=needle.size();

    for(int i=0; i<=(size-subsize); i++) {
        int first=i, second=0;

        while(second<size) {
            if(haystack[first] != needle[second])  {
                break;
            }
            else {
                first++, second++;
            }
        }

        if(second == subsize) {
            cout<<(first-second)<<endl;
        }
    }
    cout<<"Not present"<<endl;

    //Optimized Approach using KMP Algorithm
    string str="abcdaabceaabceaabdop";
    string sub="aabceaabdo";
    vector<int>lps = findLps(sub);

    int first=0, second=0;

    while(second<sub.size() && first<str.size()) {
        if(str[first]==sub[second]) {
            first++, second++;
        }
        else {
            if(second==0) {
                first++;
            } else {
                second = lps[second-1];
            }
        }
    }
    if(second==sub.size()) {
        cout<<"String match begins at index: "<<first-second<<endl;
    }
    else {
        cout<<"Not present"<<endl;
    }
    

}