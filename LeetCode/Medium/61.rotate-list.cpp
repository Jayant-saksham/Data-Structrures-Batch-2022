/*
 * @lc app=leetcode id=61 lang=cpp
 *
 * [61] Rotate List
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL || k == 0) {
            return head;
        }      
        ListNode *curr = head;
        int len = 1;
        while(curr->next!=NULL) {
            len++;
            curr = curr->next;
        }  
        curr->next = head;
        k = k%len;
        int move = len - k;
        for(int i=0;i<move;i++) {
            curr = curr->next;
        }
        head = curr->next;
        curr->next = NULL;
        return head;
    }
};
// @lc code=end

