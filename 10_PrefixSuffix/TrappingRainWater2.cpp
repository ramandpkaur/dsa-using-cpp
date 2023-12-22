// Trapping Rain Water Problem, solved by finding the maximum element of the array and then retraversing the array in 
// two halves.
// Time Complexity: O(n)
// Space Complexity: O(1)

#include<iostream>
using namespace std;

int main() {
    int height[] = {4,2,0,5,2,6,2,3};
    int n=8;
    int leftMax=0, rightMax=0, water=0;
    int max=height[0], index=0;

    // Finding the max element value and index
    for(int i=0; i<n; i++) {
        if(height[i]>max) {
            max = height[i];
            index = i;
        }
    }

    for(int i=0; i<index; i++) {
        if(leftMax > height[i])
            water += leftMax-height[i];
        else 
            leftMax = height[i];
    }
    for(int i=n-1; i>index; i--) {
        if(rightMax > height[i])
            water += rightMax-height[i];
        else 
            rightMax = height[i];
    }

    cout<<"Rain water trapped: "<<water<<endl;
}