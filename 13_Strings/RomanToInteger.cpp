// Given integers lie in the range from 1 to 3999.

/*
I - 1
V - 5
X - 10
L - 50
C - 100
D - 500
M - 1000
*/
#include<iostream>
using namespace std;
int RomanToInt(char ch) {
    if(ch == 'I')
        return 1;
    else if(ch == 'V')
        return 5;
    else if(ch == 'X')
        return 10;
    else if(ch == 'L')
        return 50;
    else if(ch == 'C')
        return 100;
    else if(ch == 'D')
        return 500;
    else
        return 1000;
}
int main() {
    string s = "MCCXLVIII"; //1248
    int index=0, sum=0;

    while(index<s.size()-1) {
        if(RomanToInt(s[index]) < RomanToInt(s[index+1])) {
            sum -= RomanToInt(s[index]);
        }
        else
            sum += RomanToInt(s[index]);
        index++;
    }
    sum += RomanToInt(s[s.size()-1]);

    cout<<"Integer is: "<<sum<<endl;
}