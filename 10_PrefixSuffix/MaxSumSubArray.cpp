#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,2,-5,1,6,-9,5,8,-4,7,-3,7,25}, n=13; //33 45
    int maxi=INT_MIN;
    int pre;

    for(int i=0; i<n; i++) {
        pre=0;
        for(int j=i; j<n; j++) {
            pre+=arr[i];
            if(pre>maxi) 
                maxi = pre;
        }
    }
    cout<<maxi<<endl;
    
}