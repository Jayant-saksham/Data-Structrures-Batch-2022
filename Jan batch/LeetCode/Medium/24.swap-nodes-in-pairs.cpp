/*
 * @lc app=leetcode id=24 lang=cpp
 *
 * [24] Swap Nodes in Pairs
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL) {
            return head;
        }
        ListNode *dummy = new ListNode(-1);
        ListNode *prev = dummy;
        ListNode *current = head;
        while(current!=NULL && current->next!=NULL) {
            prev->next = current->next;
            current->next = current->next->next;
            prev->next->next = current;
            current = current->next;
            prev = prev->next->next;
        }
        return dummy->next;
    }
};
// @lc code=end

