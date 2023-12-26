/* A 2-D Array is used to store 2 dimensional data, and is denoted by:

int arr[4][3];
This describes 4 rows and 3 columns in the 2D array.

The positions of various elements will be as follows:
   00 01 02 
   10 11 12
   20 21 22
   30 31 32


Though a 2D array has a second dimension, the data stored in them is stored in the memory in a contiguous manner.
The data storage in memory can either be 
- Row Major or 
- Column Major

We shall study Row major in detail now.

|  0 |  1 |  2 |  3 |  4 |  5 |  6 |  7 |  8 |  9 | 10 | 11 | 
| 00 | 01 | 02 | 10 | 11 | 12 | 20 | 21 | 22 | 30 | 31 | 32 |

In order to find the position of an element in 2D array in contagious repesentation:

For Row Major,
    Index = row_index * Total_Col + col_index
For Col Major,
    Index = col_index * Total_Row + row_index

In order to find the 2D array position when index in contagious representation is given:

For Row Major,
    Row_index = index / Total_Col
    Col_index = index % Total_Col

For Col Major,
    Index = col_index * Total_Row + row_index

Since we know that the array stores the address of the first element and the address of other elements is calculated 
based upon index and datatype of the array as follows:
    arr[i] = base_address + index * size_of_datatype

Hence for a 2D Array, the formula becomes-
    arr[i][j] = base_address + (row_index * col + col_index) * size_of_datatype

*/
#include<iostream>
using namespace std;

void get2DArrayColWise(int arr[][3], int row, int col) {
    // Here it is mandatory to pass the colsize of 2D array in the function so that system can calculate and fetch the
    // element location.
    for(int j=0; j<col; j++)
        for(int i=0; i<row; i++)
            cout<<arr[i][j]<<" ";

    cout<<endl;
}

void getRowMax(int arr[][3], int row, int col) {
    int sum = -1000, index=-1;

    for(int i=0; i<row; i++) {
        int total=0;
        for(int j=0; j<col; j++) {
            total += arr[i][j];
        }
        if(total>sum) {
            sum = total;
            index = i;
        }
    }
    cout<<"Max Sum Row index is: "<<index<<endl;
}

int main() {
    int arr[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};

    // Traversing a 2D array Row wise
    for(int i=0; i<4; i++) {
        for(int j=0; j<3; j++) {
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;

    // Traversing a 2D array Column wise via Function call
    get2DArrayColWise(arr, 4, 3);


    // Search an element in array
    int target = 7;
    for(int i=0; i<4; i++) {
        for(int j=0; j<3; j++) {
            if (arr[i][j] == target)
                cout<<"Target was found!"<<endl;
        }
    }
    cout<<endl;
    
    // Adding two 2D Arrays
    int arr2[4][3] = {5,2,4,7,1,5,8,7,5,32,56,8};
    int arr1[4][3] = {54,76,23,4,56,37,4,8,21,3,7,3};
    int sum[4][3];

    for(int i=0; i<4; i++) {
        for(int j=0; j<3; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    cout<<"Sum is: ";
    for(int i=0; i<4; i++) {
        for(int j=0; j<3; j++) {
            cout<<sum[i][j]<<" ";
        }
    }
    cout<<endl;

    
    // Subtracting two 2D Arrays
    int diff[4][3];

    for(int i=0; i<4; i++) {
        for(int j=0; j<3; j++) {
            diff[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
    cout<<"Difference is: ";
    for(int i=0; i<4; i++) {
        for(int j=0; j<3; j++) {
            cout<<diff[i][j]<<" ";
        }
    }
    cout<<endl;

    // Print index of row with maximum sum

    getRowMax(sum, 4, 3);

    // Print sum of diagonal elements
    // The 2D Array must be a square array to have a diagonal
    int sarr[4][4] = {1,2,3,4,5,6,7,8,9,8,6,5,3,4,2,6};
    int first=0, second=0, row=4;
    int j=row-1;
    for(int i=0; i<row; i++) {
        first += sarr[i][i];
        second += sarr[i][j-i];
    }
    cout<<"First and Second Diagonal sum is: "<<first<<", "<<second<<endl;

    // Reverse each row of matrix
    int matrix[3][4] = {2,3,4,5,1,6,2,8,4,9,3,2};
    int start, end;
    for(int i=0; i<3; i++) {
        start = 0;
        end = 3;
        while(start<=end) {
            swap(matrix[i][start], matrix[i][end]);
            start++;
            end--;
        }
    }
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


}