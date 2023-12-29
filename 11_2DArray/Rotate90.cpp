#include<iostream>
using namespace std;
/*
 1  2  3  4  5
 6  7  8  9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
     ===
21 16 11  6  1
22 17 12  7  2
23 18 13  8  3
24 19 14  9  4
25 20 15 10  5
*/
int main() {
    int matrix[5][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    int ans[5][5];
    int row = 5;

    // for(int i=0; i<row-1; i++)
    //     for(int j=0; j<row-1; j++)
    //         ans[j][row-1-i] = matrix[i][j];

    // OR

    for(int i=0; i<row; i++) {
        for(int j=i+1; j<row; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for(int i=0; i<row; i++) {
        int start = 0, end = row-1;
        while(start<=end) {
            swap(matrix[i][start], matrix[i][end]);
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