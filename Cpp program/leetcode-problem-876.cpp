//problem link - https://leetcode.com/problems/middle-of-the-linked-list/

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
    ListNode* middleNode(ListNode* head) {
       int l = 0;
        ListNode* temp = head;
        
        while(temp!=NULL){
            l++;
            temp=temp->next;
        }
        
        temp = head;
        
        for(int i =0;i < l/2; i++){
            temp = temp->next;
        }
        
        return temp;
    }
};
