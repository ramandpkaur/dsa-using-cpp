// Return true if there exist 2 sub-arrays A and B in an Array arr such that 
// size(A)+size(B)=size(arr)     and      sum(A)=sum(B)

#include<iostream>
using namespace std;

int main() {
    int arr[]={3,4,-2,5,8,20,-10,8}, n=8;

    int sum=0, sub=0;

    for(int i=0; i<n; i++) {
        sum+= arr[i];
    }
    for(int i=0; i<n-1; i++) {
        sum-= arr[i];
        sub+= arr[i];
        if(sum==sub) {
            cout<<"Yes"<<endl;
        }
    }

}