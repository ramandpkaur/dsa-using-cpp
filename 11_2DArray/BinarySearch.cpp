#include<iostream>
using namespace std;

int main() {
    int arr[3][5] = {2,6,10,14,18,21,23,27,38,41,57,63,79,86,90};
    int row = 3, col = 5;
    int target = 63;

    // Approach: 1
    // Time Complexity: O(N.logM)

    // for(int i=0; i<row; i++) {
    //     if(arr[i][0]<=target && target <=arr[i][col-1]) {
    //         int start=0, end=col-1;
    //         while(start<=end) {
    //             int mid = start + (end-start)/2;
    //             if(arr[i][mid] == target) {
    //                 cout<<"Target was found!"<<endl;
    //                 break;
    //             }
    //             else if(arr[i][mid] > target)
    //                 end = mid-1;
    //             else
    //                 start = mid+1;
    //         }
    //     }
    // }

    // Approach: 2
    // Time Complexity: O(logNM)

    int start=0, end=(col*row)-1;
    while(start<=end) {
        int mid = start+(end-start)/2;

        if(arr[mid/col][mid%col] == target) {
            cout<<"Target was found!"<<endl;
            break;
        }
        else if(arr[mid/col][mid%col] > target)
            end = mid-1;
        else
            start = mid+1;
    }
}