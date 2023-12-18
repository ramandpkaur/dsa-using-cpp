// Finding the largest sum sub-array using Kadane's Algorithm
// Time complexity = O(n)

#include<iostream>
#include<climits>
using namespace std;

int main() {
    int arr[] = {3,4,-5,8,-12,7,6,-2};
    int n=8;

    /* Kadane's Algorithm states that the largest sum sub array in a given array is equal to the largest prefix 
    sum provided any prefix sum falling below 0 is reset to zero. */

    int maxi=INT_MIN;
    int pre = 0;
    for(int i=0; i<n; i++) {
        pre += arr[i];
        if(pre<0)
            pre=0;
        maxi = max(maxi, pre);
    }
    cout<<"Max sum subarray: "<<maxi<<endl;
}