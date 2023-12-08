#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,3,4,5,7,8,11,14,18,25,27,29,35,37,40,41,49,50};
    int start = 0, end = 17;
    int mid;
    int num = 48;

    while(start <= end) {
        mid = (start+end) / 2;
        if(num == arr[mid]) {
            cout<<mid<<endl;
            return 0;
        }
        else if(num < arr[mid]) {
            end = mid-1;
        }
        else {
            start = mid+1;
        }
    }

    // Time Complexity: O(log n)
    // Best Case: O(1)
    //  Average Case: O(log n   )
    // Space Complexity: O(1)
}