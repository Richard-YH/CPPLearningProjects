#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Create a queue
    queue<int> myqueue;

    // Enqueue elements into the queue
    for (int i = 1; i <= 5; i++) {
        myqueue.push(i);
    }

    // Dequeue elements from the queue
    while (!myqueue.empty()) {
        cout << myqueue.front() << " "; // Print the front element
        myqueue.pop(); // Remove the front element
    }
    cout << endl;

    return 0;
}

