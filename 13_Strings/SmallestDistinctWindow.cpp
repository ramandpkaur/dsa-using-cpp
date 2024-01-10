// To find the smallest substring that contains all the elements present in the string using Sliding Window Protocol
// Time Complexity: O(n)
// Space Complexity: O(1)

#include<iostream>
#include<vector>
using namespace std;

int main() {
    string s = "mgsqcpjlhbmdahy";
    vector<int>count(256, 0);
    int first =0, second=0, length=s.size();
    int diff=0;

    // Finding unique characters
    for(int i=0; i<length; i++) {
        if(count[s[i]] == 0) 
            diff++;
        count[s[i]]++;
    }
    cout<<"Difference: "<<diff<<endl;
    
    // Clearing the count vector array 
    for(int i=0; i<256; i++) {
        count[i] = 0;
    }

    // Finding the smallest distinct substring window
    while(second < s.size()) {
        while(diff && second<s.size()) {
            if(count[s[second]] == 0)
                diff--;
            count[s[second]]++;
            second++;
        }
        length = min(length, (second-first));

        while(diff!=1) {
            length = min(length, (second-first));       
            count[s[first]]--;

            if(count[s[first]]==0)
                diff++;
            first++;

        }
    }

    cout<<"Length: "<<length<<endl;

}