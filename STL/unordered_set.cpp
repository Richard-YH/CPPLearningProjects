#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    // Create an unordered set
    unordered_set<int> myset = {5, 2, 8, 9, 1, 3};

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

