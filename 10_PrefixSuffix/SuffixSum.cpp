#include<iostream>
#include<vector>
using namespace std;

int main() {
    int arr[] = {23,6,3,87,12,-56,23,78,34};
    int n=9, ans[n];

    ans[n-1] = arr[n-1];

    for(int i=n-2; i>=0; i--) {
        ans[i] = ans[i+1]+arr[i];
    }

    for(int i=0; i<n; i++) {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}