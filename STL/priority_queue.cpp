#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Create a priority queue (default is max heap)
    priority_queue<int> mypq;

    // Insert elements into the priority queue
    mypq.push(30);
    mypq.push(10);
    mypq.push(20);

    // Find the maximum element
    cout << "Maximum element: " << mypq.top() << endl;

    // Remove the maximum element
    mypq.pop();

    return 0;
}

