#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    // Create an unordered map
    unordered_map<string, int> mymap;

    // Insert key-value pairs
    mymap["apple"] = 10;
    mymap["banana"] = 5;
    mymap["cherry"] = 15;

    // Find the value for a specific key
    cout << "Price of banana: " << mymap["banana"] << endl;

    // Traverse the map and output key-value pairs
    for (auto& pair : mymap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}

