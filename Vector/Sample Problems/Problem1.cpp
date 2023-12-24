/* 

**Problem Description: Accessing Array Elements**

You are given an array structure consisting of a series of variable-length arrays. Each array may contain integers. The objective is to implement a program that allows querying specific elements within these arrays.

Write a C++ program that adheres to the following specifications:

### Input Format:
- The first line contains two space-separated integers, **length** and **queries**, denoting the number of variable-length arrays and the number of queries, respectively.
- For the next **length** lines, each line contains a space-separated sequence. The first element of each sequence, **size**, represents the number of elements in the array, followed by the actual elements.
- Following these lines, there are **queries** lines, each containing two space-separated integers, **which** and **index**, representing the array index and the desired element index, respectively.

### Output Format:
- For each query, print a single integer representing the value of the element located at the specified index in the referenced array. Print each result on a new line.

### Example:
#### Input:
```
2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3
```
#### Output:
```
5
9
```

### Constraints:
- 1 <= length, queries <= 10^3
- 1 <= size of each array <= 10^3
- 0 <= elements in each array <= 10^3

*/

#include <iostream>
#include <vector>
using namespace std;

void theArrays(int length, vector <vector<int>>& arrs);
void theOutput(const vector <vector<int>>& arrs, int queries);

int main() {
    int length, queries;
    cin >> length >> queries;

    vector <vector<int>> arrs;
    theArrays(length, arrs);

    theOutput(arrs, queries);

    return 0;
}

void theArrays(int length, vector<vector<int>>& arrs) {
    for (int i = 0; i < length; i++) {
        int size;
        cin >> size;
        vector <int> arr;
        for (int k = 0; k < size; k++) {
            int something;
            cin >> something;
            arr.push_back(something);
        }
        arrs.push_back(arr);
    }
}

void theOutput(const vector<vector<int>>& arrs, int queries) {
    for (int k = 0; k < queries; k++) {
        int which, index;
        cin >> which >> index;
        cout << arrs[which][index] << endl;
    }
}
