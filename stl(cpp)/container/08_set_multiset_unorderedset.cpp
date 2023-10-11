#include<bits/stdc++.h>
using namespace std;

// set -> sorted and unique
void explainSet() {
    set<int>st;
    st.insert(1); // {1}
    st.emplace(2); // {1, 2}
    st.insert(2); // {1, 2}
    st.insert(4); // {1, 2, 4}

    st.insert(3); // {1, 2, 3, 4}

    // Functionality of insert in vector
    // can be used also, that only increases
    // efficiency

    // begin, end(), rbegin(), rend(), size(),
    // empty() and swap() are same as those of above

    // {1,2,3,4,5}
    auto it = st.find(3);

    // {1,2,3,4,5}
    auto it = st.find(6); // st.end() this would be the output.

    // {1,4,5}
    st.erase(5); // erases 5 // takes logarithmic time 

    int cnt = st.count(1); // 1 or 0

    auto it = st.find(3);
    st.erase(it); // it take constant time

    //{1, 2, 3, 4, 5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // after erase (1, 4, 5) [start, end]

    // Lower_bound() and upper_bound () function works in the same way
    // as in vector it does.

    // This is the syntax
    auto it = st.lower_bound(2); // log(n)
    auto it = st.upper_bound(3); // log(n)
}

void explainMultiSet() {
    // Everything is same as set
    // only stores duplicate elements also

    multiset<int>ms;
    ms.insert(1); // {1)
    ms.insert(1); // (1, 1)
    ms.insert(1); // (1, 1, 1)

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1);

    // only a single one erased
    ms.erase(ms.find(1));

    auto it = ms.find(1); // ms.find(1) + 2 in the end part of the erase() function. But this will give us an error because only array, vector, and string can store elements in contiguous memory locations, so we can't do +2 and access the element after the first occurrence of 1
    advance(it, 2); //Now the iterator is one position ahead of where you want it to be. This is because in the erase() function it takes from the start till one element less than the end that we specified

    // auto it = ms.find(1); // ms.find(1) + 2 in the end part of the erase() function.
    // advance(it, 2); // Now the iterator is one position ahead of where you want it to be.


    ms.erase(ms.find(1), it); 
    
    // rest all function same as set
}

void explainUnSet(){
    unordered_set<int> st; // O(1)
    // unique, but not sorted
    // lower_bound and upper_bound function does not works, rest all functions are same
    // as above,it does not stores in any particular orderIt has a better complexity
    // than set in most cases, except some when collision happens
}

int main()
{
    explainSet();
    explainMultiSet();
    explainUnSet();
    return 0;
}