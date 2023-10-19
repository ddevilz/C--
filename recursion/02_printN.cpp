#include<bits/stdc++.h>
using namespace std;

// Recursive function to generate a range of integers from 1 to n
void func(int i, vector<int> &v, int n) {
    // Add the current integer 'i' to the vector 'v'
    v.push_back(i);

    // Base case: If 'i' equals 'n', terminate the recursion
    if (i == n) {
        return;
    }

    // Recursive call: Generate the next integer (i+1)
    func(i + 1, v, n);
}

// Wrapper function to generate a vector of integers from 1 to x
vector<int> printNos(int x) {
    // Initialize an empty vector to store the integers
    vector<int> v;

    // Start the recursion by calling 'function' with 'i' as 1 and 'n' as 'x'
    func(1, v, x);

    // Return the populated vector containing the desired range of numbers
    return v;
}


int main() {
    int x;

    // Get the value of x from the user or provide it as needed
    cout << "Enter a value for x: ";
    cin >> x;

    // Call the printNos function to generate the range of integers
    vector<int> result = printNos(x);

    // Print the generated integers
    cout << "Generated integers from 1 to " << x << ":" << endl;
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}