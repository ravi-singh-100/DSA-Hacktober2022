// Question : https://leetcode.com/problems/remove-linked-list-elements/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode *p=head,*q=head;
    if(head==NULL){
        return head;
    }
    while((p!=NULL) && (p->val==val)){
        p=p->next;
        
        head=p;
        
    }q=p;
    while(p!=NULL){
        if(p->val==val){
            q->next=p->next;
            p->next=NULL;
            p=q->next;
            continue;
        }
        q=p;
        p=p->next;
    }
    return head;
    

}
