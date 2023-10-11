#include<bits/stdc++.h>

using namespace std;

void vectorLearn() {
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>>vec;

    // v.push_back({1, 2});
    v.emplace_back(1, 2); // emplace_back is faster than push_back

    vector<int> v(5, 100); // 5 is size of vector and 100 are the values {100, 100, 100, 100, 100}

    vector<int> v(5); // even if the vector size is 5 it is expandable. vector size is not fixed.

    vector<int> v1(5,20);
    vector<int> v2(v1);


    vector<int>::iterator it = v.begin(); // iterator -> points to the memory where the element is stored.

    it++; 
    cout << *(it) << " ";

    it = it + 2; 
    cout << *(it) << " ";

    vector<int>::iterator it = v.end(); // {1,2,3,4} -> so v.end() points the memory location next to 4. if i want to excess 4 then you have to it--.

    // vector<int>::iterator it = v.rend();  // reverse end -> never used --> {1,2,3,4} --> so v.rend() points the memory location next to 1. if i want to excess 1 then you have to it++.

    // vector<int>::iterator it = v.rbegin(); // reverse begin -> never used

    cout << v[0] << " " << v.at(0);
    cout << v.back() << " ";

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) cout<< *(it) << " ";

    for(auto it = v.begin(); it != v.end(); it++) cout<< *(it) << " ";

    for (auto element : v) cout<< element << " ";

    // erase
    //  {1,2,3,4}
    v.erase(v.begin()+1); // remove 2 {1,3,4}

    v.erase(v.begin()+1, v.begin()+2); // [start, end] -> end is not included

    // Insert function

    vector<int> v(2,100); // {100, 100}
    v.insert(v.begin(), 300); // {300,100,100} -> insert(index, value)
    v.insert(v.begin() + 1, 2 ,10); // {300, 10 ,10, 100, 100} insert(index, no. of elements, value)

    vector<int> copy(5,50); // {50,50}
    v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10 ,10, 100, 100}

    // {10, 20}
    cout << v.size(); // 2

    // {10, 20}
    v.pop_back(); // {10}

    // v1 -> {10,20}
    // v2 -> {30,40}
    v1.swap(v2); // v1 -> {30, 40} v2 -> {10,20}

    v.clear();

    cout << v.empty();

}

int main()
{
 vectorLearn();
 return 0;
}