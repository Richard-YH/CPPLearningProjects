#include <iostream>
#include <list>
using namespace std;

int main() {
    // Create a doubly linked list
    list<int> mylist = {1, 2, 3, 4, 5};

    // Insert elements at the beginning and end
    mylist.push_front(0);
    mylist.push_back(6);

    // Remove elements from the beginning and end
    mylist.pop_front();
    mylist.pop_back();

    // Traverse the list and output elements
    for (int i : mylist) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

