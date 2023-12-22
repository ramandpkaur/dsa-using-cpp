// Trapping Rain Water Problem, solved by finding preMax and postMax array to find max at the left and right of each 
// element. Then retraversing the array, makin a total of 3 traversals.
// Time Complexity: O(n)
// Space Complexity: O(n)

#include<iostream>
using namespace std;

int main() {
    int arr[] = {4,2,0,5,2,6,2,3};
    int n=8;
    int preMax[n], postMax[n];
    long long ans=0;
    
    preMax[0] = 0;
    for(int i=1; i<n; i++) {
        preMax[i] = max(preMax[i-1], arr[i-1]);
    }
    
    postMax[n-1] = 0;
    for(int i=n-2; i>=0; i--) {
        postMax[i] = max(postMax[i+1], arr[i+1]);
    }
    
    for(int i=0; i<n; i++) {
        if(min(preMax[i], postMax[i]) > arr[i]) {
            ans = ans + min(preMax[i], postMax[i]) - arr[i];
        }
    }
        
    cout<<"Rain water trapped: "<<ans<<endl;
}