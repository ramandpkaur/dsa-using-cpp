#include<iostream>
#include<vector>
using namespace std;

int main() {
    int arr[] = {23,6,3,87,12,-56,23,78,34};
    int n=9, ans[n];

    ans[0] = arr[0];

    for(int i=1; i<n; i++) {
        ans[i] = ans[i-1]+arr[i];
    }

    for(int i=0; i<n; i++) {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
}