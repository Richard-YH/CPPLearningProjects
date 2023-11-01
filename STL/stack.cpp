#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Create a stack
    stack<int> mystack;

    // Push elements onto the stack
    for (int i = 1; i <= 5; i++) {
        mystack.push(i);
    }

    // Pop elements from the stack
    while (!mystack.empty()) {
        cout << mystack.top() << " "; // Print the top element
        mystack.pop(); // Remove the top element
    }
    cout << endl;

    return 0;
}

