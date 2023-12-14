#include<iostream>
using namespace std;

int main() {
    int k=2; //Number of workers
    int N=4; //number of boards to be painted
    int A[]={12,34,67,90}; //Array of board sizes

    if(k<N)
        return -1;
    
    int start=0, end=0, mid, ans;
    
    for(int i=0; i<N; i++) {
        start = max(A[i], start);
        end += A[i];
    }
    
    while(start<=end) {
        mid = start + (end-start)/2;
        int pages=0, count=1;
        
        for(int i=0; i<N; i++) {
            pages += A[i];
            if(pages>mid) {
                pages = A[i];
                count++;
            }
        }
        
        if(count<=k) {
            ans = mid;
            end = mid-1;
        }
        else {
            start = mid+1;
        }
    }
    
    cout<<ans<<endl;
}