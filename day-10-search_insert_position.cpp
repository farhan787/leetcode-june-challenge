// Problem Link => https://leetcode.com/problems/search-insert-position

#include <iostream>
#include <vector>

using namespace std;

// Time complexity = O(nums.size())
// Space complexity = O(1)
int searchInsert(vector<int>& nums, int target) {
    int index = -1;
    for (int i = 0; i < (int)nums.size(); i++) {
        int num = nums[i];
        if (num == target) return i;
        if (num > target) {
            index = i;
            break;
        }
    }
    return index == -1 ? (int)nums.size() : index;
}

int main() {
}
