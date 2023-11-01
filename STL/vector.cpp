#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Create a dynamic array (vector) of integers
    vector<int> vec = {1, 2, 3, 4, 5};

    // Traverse the vector and output elements
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;

    // Add an element at the end
    vec.push_back(6);

    // Remove the last element
    vec.pop_back();

    return 0;
}

