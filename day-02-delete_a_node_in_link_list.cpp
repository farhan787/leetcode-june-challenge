// Problem Link => https://leetcode.com/problems/delete-node-in-a-linked-list

#include <iostream>
#include <vector>

using namespace std;

// Time complexity = O(1)
// Space complexity = O(1)
void deleteNode(ListNode* node) {
    node->val = node->next->val;
    ListNode* nodeToDelete = node->next;
    node->next = node->next->next;
    delete nodeToDelete;
}

int main() {
}
