#include<iostream>
#include<math.h>
using namespace std;

int count(int n) {
    int count=0;
    while(n) {
        count++;
        n /= 10;
    }
    return count;
}

bool amstrong(int num, int digit) {
    int n = num, ans = 0;
    while(n) {
        int rem = n%10;
        ans = ans + pow(rem, digit);
        n /= 10;
    }
    if(ans==num) {
        return 1;
    }
    return 0;
}

int main() {
    int num;
    cin>>num;

    int digit = count(num);
    cout<<amstrong(num, digit);
}