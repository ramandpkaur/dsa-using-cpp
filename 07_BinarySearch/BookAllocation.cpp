#include<iostream>
using namespace std;

int main() {
    int M=3; //Number of students
    int N=4; //Total number of Books
    int A[]={12,34,67,90};; //Array of number of pages in each book

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
        
        if(count<=M) {
            ans = mid;
            end = mid-1;
        }
        else {
            start = mid+1;
        }
    }
    
    cout<<ans<<endl;
}