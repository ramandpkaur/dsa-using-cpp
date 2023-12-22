// Finding if any three elements of an array can return a given target sum.
// Time Complexity: 
// Space Comxplexity: 

#include<iostream>
#include<vector>
using namespace std;

int main() {
    int arr[]={1,4,6,8,10,45};
    int target = 13, n = 6;

    /* Approach 1: 
    Using 3 nested loops O(n^3) 
    */

    // for(int i=0; i<n-2; i++) {
    //     for(int j=i+1; j<n-1; j++) {
    //         for(int k=j+1; k<n; k++) {
    //             if(arr[i]+arr[j]+arr[k] === target)
    //                 return 1;
    //         }
    //     }
    // }

    /* Approach 2: 
    Sorting the array first, then using 2 nested loops and applying binary search to find the third number 
    O(n^2 log.n) 
    */

    // for(int i=0; i<n-2; i++) {
    //     target -= arr[i];
    //     for(int j=i+1; j<n-1; j++) {
    //         target -= arr[j];
    //             applying binary search to find target
    //     }
    // }

    /* Approach 3:
    Fixing one index and then finding the other two numbers using two pointer approach.
    O(n^2)
     */
    
    // qsort(arr.begin(), arr.end());

    int start=1, end=n-1;
    for(int i=0; i<n-2; i++) {
        target -= arr[i];
        while(start<end) {
            int sum = arr[start]+arr[end];
            if(sum == target) {
                cout<<"Yes"<<endl;
                break;
            }
            else if(sum<target)
                start++;
            else
                end--;
        }
    }
}