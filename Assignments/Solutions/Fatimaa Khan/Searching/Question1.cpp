// Question 1: Given an integer array and another integer element. The task is to find if the given element is present in array or not.
// Example 1:
// Input:
// n = 4
// arr[] = {1,2,3,4}
// x = 3
// Output: 2

#include <iostream>
using namespace std;

int findElement(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i; // agar number milgea toh index return karado
        }
    }
    return -1; // nahi toh -1 return karado
}

int main() {
    int n = 4;
    int arr[] = {1, 2, 3, 4};
    int x = 3;
    
    int result = findElement(arr, n, x);
    
    if (result != -1) {
        cout << "Output: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    
    return 0;
}
