// To find the maximum element to the right og an element whose difference is maximum
// Time COmplexity: O(n2) 

#include<iostream>
#include<climits>
using namespace std;

int main() {
    int arr[] = {9,5,8,12,2,3,7,4};
    int n=8;
    int maxi = INT_MIN;

    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            maxi = max(maxi, arr[j]-arr[i]);
        }
    }
    cout<<"Maximum diff is: "<<maxi<<endl;
}