// Vectors in Standard Template Library

#include<iostream>
#include<vector>
#include "../../../usr/include/c++/9/bits/algorithmfwd.h"
using namespace std;

int main() {
    // A vector is simply an array with a vast range of functions and methods.

    /* *****************
    Vector declaration
    ***************** */
    vector<int>v;

    /* ********************* 
    Initializing a vector 
    ********************* */
    vector<int>v1(4);
    // creates a vector of size 4
    vector<int>v2(4,2);
    // creates a vector of size 4 with all elements as 2

    /* *********************     
    Push values in array 
    ********************* */
    vector<int>v3;
    v3.insert(v3.begin()+1, 50);
    // Inserts 50 at index 1 and moves the other elements to the right

    v3.push_back(5);
    // Pushes element 5 to the array

    /* A push_back function does not just pushes the value but also searches for a new memory location, copy the current array 
    elements to the new location and then puch the new element inside. Refer to the below comment to understand the behavior of
    push_back function. */

    v3.push_back(4);
    v3.push_back(8);
    v3.push_back(1);

    /* This may seem like new values are being pushed to the array.
    In reality, when the first element is inserted to the array, it finds a space in the heap memory enough for 1 single element.
    When we push another value since there is not enough space, the array will look for anothr location with memory double its 
    initial size.
    Why always doubled? This way the average complexity of the push_back function is of the Order of 1.  */

    // Other ways to initialize vectors
    vector<int>v4={2,3,4,5,6};

    vector<int>v5(5);
    for(int i=0; i<5; i++) {
        cin>>v5[i];
    }

    int n;
    cin>>n;
    
    vector<int>v6(n);
    for(int i=0; i<n; i++) {
        cin>>v6[i];
    }
    /* In case of a Vector, dynamic allocation of size is allowed. We can not do this in case of arrays.

    We know that the algorithms are executed in the RAM. This memory is divided into two parts - Stack and Heap.
    In Stack, memory allocation is sequential whereas in Heap, the memory is assigned randomly.
    A very low amount of memory is allocated to the Stack (10MB to 20MB) in comparison to Heap.(in GBs)
    When an array is created, it is assigned the memory in the Stack. Since with Dynamic allocation we can receive huge values 
    as well (say in crores), it is possible that the Stack may not have enough memory to store such large data. Hence, it is a 
    best practice to initialize the size of array at the time of declaration.
    
    In case of Vectors. the memory is allocated randomly in the Heap, but to which dynamic memory allocation is feasible. */

    /* *********************     
    Remove values from vector 
    ********************* */

    // To remove last element
    v3.pop_back();
    // Time complexity is O(1)

    // Remove all elements
    v3.clear();
    // Time complexity is O(1)

    // Remove element at given index
    v3.erase(v.begin()+2);
    // Here the function not only pops given lement but also moves forward the elements followed by the removed element
    // Hence complexity is O(n)


    /* *********************     
    Size and Capacity of a vector 
    ********************* */
    v4.size();

    v4.capacity();

    // Pop operation does not affect the capacity of an array.


    /* *********************     
    Front, Back, At, empty
    ********************* */
    cout<<v4.front();
    // Returns the first element of vector
    
    cout<<v4.back();
    // Returns the last element of vector
    
    cout<<v4.empty();
    // Returns true (1) if v4 is an empty vector

    cout<<v4.at(3);
    // Returns the value of element stored at index 3


    /* *********************     
    Copy vector to another Vector
    ********************* */
    vector<int>arr={1,2,3,4,5,6};
    v=arr;


    /* *********************     
    Iterator in a Vector
    ********************* */
    cout<<v4.begin();
    // Points to the first element of vector

    cout<<v4.end();
    // Points to the next location after the last element of vector

    for(auto it=v4.begin(); it!=v4.end(); it++) {
        cout<<*it<<" ";
        // Print the vector
    }

    v4.rbegin();
    // Points to location previous to the first element of vector

    v4.end();
    // Points to the last element of vector

    for(auto it=v4.rend(); it!=v4.rbegin(); it--) {
        cout<<*it<<" ";
        // Prints the vector in reverse order
    }
    
    /* *********************     
    Printing elements in a Vector
    ********************* */
    for(int i=0; i<v4.size(); i++) {
        cout<<v4[i]<<" ";
        // Print the vector
    }

    for(auto i:arr) {
        cout<<i<<" ";
    }
    
    /* *********************     
    Sorting elements in a Vector
    ********************* */
    vector<int>v7={89,34,6,12,61};
    
    sort(v7.begin(), v7.end());
    // Sorts in ascending order

    sort(v7.begin(), v7.end(), greater<int>());
    // Sorts in descending order

    // Time complexity of sort() function is O(n.logn)
    /* *********************     
    Search elements in a Vector 
    ********************* */
    cout<<binary_search(arr.begin(), arr.end(), 6);
    // Returns true if the element exists in the given range

    cout<<find(v7.begin(), v7.end(), 6);
    // Returns the iterator for element 6. (This does no treturn the index directly)
    
    cout<<find(v7.begin(), v7.end(), 6)-v7.begin();
    // Returns the index of the element found

    /* *********************     
    Important Functions related to Vectors
    ********************* */
    cout<<count(arr.begin(), arr.end(), 6);
    // Returns number of occurence of element 6 in the range

    cout<<max_element(arr.begin(), arr.end());
    // Returns the maximum element in the given range

    cout<<min_element(arr.begin(), arr.end());
    // Returns the minimum element in the given range

    cout<<lower_bound(arr.begin(), arr.end(), 10);
    // Returns the iterator pointing to the first element greater than 10 in the given range

    cout<<upper_bound(arr.begin(), arr.end(), 50);
    // Returns the iterator pointing to the first element less than 50 in the given range

    
    



    /* Static Memory Allocation is the one in which the total memory required to execute the program is defined at the time of 
    compliation of code.

    Dynamic Memory Allocation is the one in which the total memory required to execute the program is defined by a user input 
    received during runtime. */
}