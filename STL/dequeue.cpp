#include <iostream>
#include <deque>
using namespace std;

int main() {
    // Create a double-ended queue
    deque<int> mydeque = {1, 2, 3, 4, 5};

    // Insert elements at the front and back
    mydeque.push_front(0);
    mydeque.push_back(6);

    // Remove elements from the front and back
    mydeque.pop_front();
    mydeque.pop_back();

    // Traverse the deque and output elements
    for (int i : mydeque) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

