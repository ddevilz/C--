#include<bits/stdc++.h>
using namespace std;

int fibonacci(int N){
   
   // Base Condition.
   if(N <= 1)
   {
       return N;
   }

   // Problem broken down into 2 functional calls
   // and their results combined and returned.
   int last = fibonacci(N-1);
   int slast = fibonacci(N-2);
   
   return last + slast;

}

int main(){
  
  // Here, let’s take the value of N to be 4.
  int N = 4;
  cout<<fibonacci(N)<<endl;
  return 0;

}

/*
    Function to calculate the nth Fibonacci number using memoization.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/

// int fibMemoization(int n, vector<int>& memo) {
//     // If the value is already computed, return it from the memoization table.
//     if (memo[n - 1] != -1) {
//         return memo[n - 1];
//     }

//     // Calculate the nth Fibonacci number recursively using memoization.
//     return memo[n - 1] = fibMemoization(n - 1, memo) + fibMemoization(n - 2, memo);
// }

// // Function to get the nth Fibonacci number.
// vector<int> generateFibonacciNumbers(int n) {
//     // Create a memoization table to store computed values.
//     vector<int> memo(n, -1);

//     // Base cases: fib(1) = 0, fib(2) = 1.
//     memo[0] = 0;
//     memo[1] = 1;
    
//     // Call the recursive function to calculate the nth Fibonacci number.
//     fibMemoization(n  ,memo);

//     return memo;
// }