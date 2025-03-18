/*

Q) Problem Statement: Range Sum Query

You are given two integers i and j, where 0 ≤ i < j ≤ 9999. Your task is to compute the sum of integers from index i to j, both included.

Input Format:
two integers  i and j (0 ≤ i < j≤ 9999),

Output Format:
For each query, print a single integer representing the sum of numbers from index i to j.

Constraints:
0:<j≤9999

Input:
0 3 
2 6
10 10001

Output:
6
20
Invalid input i&j i<=j<10000

*/


#include <bits/stdc++.h>
using namespace std;

int rangeSum(int i, int j) {
    return (j * (j + 1)) / 2 - ((i * (i - 1)) / 2);
}

bool isValidInput(int i, int j) {
    return i < j && j < 10000;
}

int main() {
    int i, j;

    while (cin >> i >> j) {
        if (isValidInput(i, j)) {
            int sum = rangeSum(i, j);
            cout << sum << endl;
        } 
        else {
            cout << "Invalid input i&j i<=j<10000" << endl;
        }
    }

    return 0;
}
