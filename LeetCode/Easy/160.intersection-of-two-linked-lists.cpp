/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL) {
            return NULL;
        }
        int len1 = 0;
        int len2 = 0;
        ListNode *p1 = headA;
        ListNode *p2 = headB;
        while(p1!=NULL) {
            len1++;
            p1 = p1->next;
        }
        while(p2!=NULL) {
            len2++;
            p2 = p2->next;
        }
        int diff = 0;
        p1 = headA;
        p2 = headB;
        if(len1>len2) {
            diff = len1 - len2;
            for(int i=0;i<diff;i++) {
                p1 = p1->next;
            }
        }   
        else {
            diff = len2 - len1;
            for(int i=0;i<diff;i++) {
                p2 = p2->next;
            }
        }
        while(p1!=NULL && p2!=NULL) {
            if(p1 == p2) {
                return p1;
            }
            p1 = p1->next;
            p2 = p2->next;
        }
        return NULL;
    }
};
// @lc code=end

