// Problem Link => https://leetcode.com/problems/power-of-two

#include <iostream>
using namespace std;

// Time complexity = O(1)
// Space complexity = O(1)
bool isPowerOfTwo(int n) {
    if (n <= 0) return false;

    // make last set bit of n to 0
    int num = n & (n - 1);
    return !num;
}

int main() {
}
