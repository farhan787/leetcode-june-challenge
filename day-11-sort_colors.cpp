// Problem Link => https://leetcode.com/problems/sort-colors

#include <iostream>
#include <vector>

using namespace std;

// 1. First Approach - Using Counting Sort
// 2. Second Approach - Using Two Pointers

// Time complexity = O(nums.size())
// Space complexity = O(1)
void sortColors(vector<int>& nums) {
    const int COUNTS_SIZE = 3;
    int counts[COUNTS_SIZE] = {0};

    for (int num : nums) {
        counts[num]++;
    }

    int currIndex = 0;
    for (int i = 0; i < COUNTS_SIZE; i++) {
        for (int count = 0; count < counts[i]; count++) {
            nums[currIndex++] = i;
        }
    }
}

// Time complexity = O(nums.size())
// Space complexity = O(1)
void sortColors(vector<int>& nums) {
    int left = 0;
    int right = (int)nums.size();
    int currIndex = 0;

    while (currIndex < right) {
        int num = nums[currIndex];

        if (num == 0) {
            swap(nums[left], nums[currIndex]);
            left++;
            currIndex++;
        } else if (num == 1) {
            currIndex++;
        } else {
            right--;
            swap(nums[right], nums[currIndex]);
        }
    }
}

int main() {
}
