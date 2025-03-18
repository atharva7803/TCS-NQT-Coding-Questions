/*
Q) Problem Statement: Making Triplets Equal

You are given a triplet of integers (a, b, c). You can perform the following operation any number of times:

Select any two numbers from the triplet.

Add 1 to both selected numbers.
Subtract 1 from the remaining number.

Your task is to determine the number of steps needed to make all three numbers equal using the given operations.
If not possible return -1.

Input:
A single integer T representing the number of test cases.
Each test case consists of three integers a, b, c.

Output:
For each test case, print the number of steps if it is possible to make all three numbers equal; otherwise, print -1.

Constraints:
1≤T≤10^4

Example:
Input:
3
1 2 3
4 4 4
2 2 8

Output:
-1
0
3

*/


#include <bits/stdc++.h>
using namespace std;

int CountSteps(int a, int b, int c){
    vector<int> v = {a,b,c};
    sort(v.begin(), v.end());

    if(v[0] == v[1] && v[1] == v[2]){
        return 0;
    }

    int steps = 0;
    while(true){
        v[0]++;
        v[1]++;
        v[2]--;
        steps++;
        sort(v.begin(), v.end());

        if(v[0] == v[1] && v[1] == v[2]){
            return steps;
        }

        if((v[0] == v[1] && v[1]+1 == v[2]) || v[1] == v[2] && v[0]+1 == v[1]){
            return -1;
        }
    }
}

int main(){
    int T;
    cin >> T; // Number of test cases
    while(T--){
        int a, b, c;
        cin >> a >> b >> c;

        int result = CountSteps(a, b, c);
        cout << result << endl;
    }

    return 0;
}

