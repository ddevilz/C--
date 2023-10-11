#include<bits/stdc++.h>
using namespace std;

// Map stores unique keys in sorted order.
void explainMap() {
    map<int, int> mpp;
    map<int, pair<int, int>> mpp2;
    map< pair<int, int>, int> mpp3;

    mpp[1] = 2;
    mpp.emplace(3, 1);

    mpp.insert({2, 4});

    mpp3[{2,3}] = 10;

    // {
    //     {1,2}
    //     {2,4}
    //     {3,1}
    // }
    for(auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }
    cout << mpp[1];
    cout << mpp[5];

    auto it = mpp.find(3);
    if (it != mpp.end()) {
        cout << it->second << endl;
    } else {
        cout << "Key 3 not found in the map." << endl;
    }

    auto it = mpp.find(5); // it points to mpp.end() 

    //This is the syntax
    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);

    // erase, swap , size, empty are same as rest of the containers.
}

void explainMultimap() {
    // everything same as map, only it can store multiple keys
    // duplicate keys and sorted
    // only mpp[key] cannot be used here
}
void explainUnorderedMap() {
    // same as set and unordered_Set difference.
    // randamize not sorted but unique keys
}


void explainMap1() {
    // Define a map with int keys and int values
    map<int, int> mpp1;
    mpp1[1] = 2;
    mpp1.emplace(3, 1);

    // Define a map with int keys and pairs of ints as values
    map<int, pair<int, int>> mpp2;
    mpp2[2] = {4, 5};
    // mpp2[{2, 3}] = {10, 20};

    // Define a map with pairs of ints as keys and int values
    map<pair<int, int>, int> mpp3;
    mpp3[{1, 2}] = 4;
    mpp3[{2, 4}] = 6;
    mpp3[{3, 1}] = 8;

    // Display the contents of mpp1
    for (auto it : mpp1) {
        cout << it.first << " " << it.second << endl;
    }

    // Display the contents of mpp2
    for (auto it : mpp2) {
        cout << it.first << " (" << it.second.first << ", " << it.second.second << ")" << endl;
    }

    // Display the contents of mpp3
    for (auto it : mpp3) {
        cout << "(" << it.first.first << ", " << it.first.second << ") " << it.second << endl;
    }

    // Accessing elements in mpp1
    cout << mpp1[1] << endl; // Accessing an element that exists (2)
    cout << mpp1[5] << endl; // Accessing an element that doesn't exist (0)
    
    // Similar access and comments apply to mpp2 and mpp3.
}

int main() {
    explainMap();
    explainMap1();
    return 0;
}
