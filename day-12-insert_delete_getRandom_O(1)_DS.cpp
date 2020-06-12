// Problem Link => https://leetcode.com/problems/insert-delete-getrandom-o1

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class RandomizedSet {
   private:
    unordered_map<int, int> position;
    vector<int> nums;

   public:
    /** Initialize your data structure here. */
    RandomizedSet() {
    }

    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if (position.find(val) != position.end()) return false;
        nums.push_back(val);
        position[val] = nums.size() - 1;
        return true;
    }

    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if (position.find(val) == position.end()) return false;

        int lastNum = nums.back();
        position[lastNum] = position[val];
        nums[position[val]] = lastNum;

        nums.pop_back();
        position.erase(val);
        return true;
    }

    /** Get a random element from the set. */
    int getRandom() {
        return nums[rand() % (int)nums.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */

int main() {
}
