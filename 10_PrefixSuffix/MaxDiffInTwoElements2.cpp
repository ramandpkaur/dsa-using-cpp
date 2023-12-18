// To find the maximum element to the right og an element whose difference is maximum
// Time Complexity: O(n)

#include<iostream>
#include<climits>
using namespace std;

// Here we can use Suffix max, i.e. find a new array that gives max suffix of every element and then compare the array.
// Or we can run a single loop from (n-1)th element that will update the max suffix and also compare maxi together.

int main() {
    int arr[] = {9,5,8,12,2,3,7,4};
    int n=8;
    int maxi = INT_MIN;
    int suf = arr[n-1];

    for(int i=n-1; i>=0; i--) {
        maxi = max(maxi, suf-arr[i]);
        suf = max(suf, arr[i]); 
    }
    cout<<"Max. diff is: "<<maxi<<endl;
}
