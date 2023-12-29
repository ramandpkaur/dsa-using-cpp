#include<iostream>
using namespace std;

int main() {
    int matrix[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int k;
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) 
            cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl<<"Enter how many times the matrix must be rotated: ";
    cin>>k;

    k = k%4;

    while(k>0) {
        // Rotating matrix by 90 degrees
        for(int i=0; i<4; i++) {
            for(int j=i+1; j<4; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i=0; i<4; i++) {
            int start = 0, end = 3;
            while(start<=end) {
                swap(matrix[i][start], matrix[i][end]);
                start++;
                end--;
            }
        }
        k--;
    }
    cout<<endl<<"Rotated Matrix is: "<<endl;
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) 
            cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
}