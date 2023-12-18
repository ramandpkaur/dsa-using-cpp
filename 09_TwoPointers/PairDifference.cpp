#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>A = {5,10,3,2,50,80};
    int diff = 78;
    int start=0, end=1, n=A.size()-1;

    // sort(A.begin(), A.end());

    if(diff<0)
        diff *= -1;

    while(end<n) {
        if(A[end]-A[start] == diff)
            return 1;
        else if(A[end]-A[start] > diff)
            end--;
        else
            start++;
        if(start==end)
            end++;
    }
    return 0;



}