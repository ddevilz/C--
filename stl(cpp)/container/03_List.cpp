#include<bits/stdc++.h>
using namespace std;

void listLearn() {
    list<int> ls;

    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2, 4}

    ls.push_front (5); // {15, 2, 4); 
    ls.emplace_front(); // {2, 4}; 
    // insert in a vector is costlier (time complexity)
    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

int main()
{
    listLearn();
    return 0;
}