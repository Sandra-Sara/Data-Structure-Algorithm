#include <iostream>
using namespace std;
// Function to perform pre-order traversal
void preOrderTraversal(int arr[], int index, int n) 
{
    // Base condition: if index is greater than or equal to the number of elements
    if (index >= n || arr[index] == -1) { // assuming -1 as null node
        return;
    }
    // Step 1: Visit the root (print the element)
    cout << arr[index] << "->";
    // Step 2: Traverse the left subtree
    preOrderTraversal(arr, 2 * index + 1, n); /// 1th idx e 2 bsbe
    // Step 3: Traverse the right subtree
    preOrderTraversal(arr, 2 * index + 2, n); //
}
int main() {
    // Let's consider the binary tree is stored in an array
    int arr[6] = {1, 2, 3, 4, 5, 6};  // -1 represents null (no child)
    cout << "Pre-order traversal of the binary tree: ";
    preOrderTraversal(arr, 0, 6);
    return 0;

}
