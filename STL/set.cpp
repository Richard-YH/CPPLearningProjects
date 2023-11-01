#include <iostream>
#include <set>
using namespace std;

int main() {
    // Create a set
    set<int> myset = {5, 2, 8, 9, 1, 3, 5}; // Duplicate '5' will be ignored

    // Insert elements
    myset.insert(7);

    // Erase elements
    myset.erase(2);

    // Traverse the set and output elements
    for (int i : myset) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

