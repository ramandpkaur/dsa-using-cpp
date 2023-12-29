#include<iostream>
using namespace std;
/*
 1  2  3  4  5
 6  7  8  9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
     ===
25 24 23 22 21
20 19 18 17 16
15 14 13 12 11
10  9  8  7  6 
 5  4  3  2  1
*/
int main() {
    int matrix[5][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    int ans[5][5];
    int row = 5;
    
    for(int i=0; i<row; i++) {
        int start = 0, end = row-1;
        while(start<=end) {
            swap(matrix[i][start], matrix[i][end]);
            start++;
            end--;
        }
    }
    for(int j=0; j<row; j++) {
        int start = 0, end = row-1;
        while(start<=end) {
            swap(matrix[start][j], matrix[end][j]);
            start++;
            end--;
        }
    }
    for(int i=0; i<row; i++) {
        for(int j=0; j<row; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

}