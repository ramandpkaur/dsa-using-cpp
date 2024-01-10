#include<iostream>
#include<vector>
using namespace std;

int main() {
    string s = "is2 sentence4 This1 a3";
    vector<string>sentence(10);
    int count=0, index=0;
    string temp="";

    for(int i=0; i<s.size(); i++) {
        if(s[i] == ' ') {
            count++;
            index = temp[temp.size()-1] - '0';
            temp.pop_back();
            sentence[index] = temp;
            temp="";
        }
        else {
            temp += s[i];
        }
    }
    count++;
    index = temp[temp.size()-1] - '0';
    temp.pop_back();
    sentence[index] = temp;
    temp.clear();

    for(int i=1; i<=count; i++) {
        temp += sentence[i];
        temp+= ' ';
    }
    temp.pop_back();

    cout<<temp<<endl;
}