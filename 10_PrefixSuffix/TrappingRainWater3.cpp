// Trapping Rain Water Problem, solved by using single loop traversal.
// Time Complexity: O(n)
// Space Complexity: O(1)

#include<iostream>
#include<climits>
using namespace std;

int main() {
    int arr[] = {4,2,0,5,2,6,2,3};
    int n=8;
    int mini = min(arr[0], arr[-1] );
    int water = mini * (n-2);

    for(int i=1; i<n-1; i++) {
        if(arr[i]>mini) {
            water -= mini;
        }
        else {
            water -= arr[i];
        }
    }

    cout<<"Rain water trapped: "<<water<<endl;
    
}
