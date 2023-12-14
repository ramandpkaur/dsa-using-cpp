#include<iostream>
using namespace std;

int main() {
    int n=5; //Size of array
    int k=3; //Number of aggressive cows
    int stalls[] = {1,2,4,8,9}; //Array of position of stalls

    int start=1, end, ans, mid;

    //Sort in increasing order
    // If given a vector, we can directly do this using below code
    // sort(stalls.begin(), stalls.end());

    end = stalls[n-1] - stalls[1];

    while(start<=end) {
        mid = start+ (end-start)/2;
        int count=1, pos = stalls[0];

        for(int i=1; i<n; i++) {
            if(pos+mid<=stalls[i]) {
                count++;
                pos=stalls[i];
            }
        }

        if(count<=k) {
            end=mid-1;
        }
        else {
            ans = mid;
            start = mid+1;
        }
    }
    return ans;
}