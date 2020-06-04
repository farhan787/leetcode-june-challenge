// Problem Link => https://leetcode.com/problems/reverse-string

#include <iostream>
#include <vector>

using namespace std;

// Time complexity = O(N)
// Space complexity = O(1)
void reverseString(vector<char>& s) {
    int left = 0;
    int right = (int)s.size() - 1;

    while (left < right) {
        swap(s[left++], s[right--]);
    }
}

int main() {
}
