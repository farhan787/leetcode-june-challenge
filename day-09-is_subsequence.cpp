// Problem Link => https://leetcode.com/problems/is-subsequence

#include <iostream>
using namespace std;

// Time complexity = O(t.length())
// Space complexity = O(1)
bool isSubsequence(string s, string t) {
    /*
                 j
             01234                 i
        s = "aabce", t = "abeadabcde"
    */
    int sPointer = 0;
    for (char tChar : t) {
        if (tChar == s[sPointer]) {
            sPointer++;
        }
    }
    return sPointer >= (int)s.length();
}

int main() {
}
