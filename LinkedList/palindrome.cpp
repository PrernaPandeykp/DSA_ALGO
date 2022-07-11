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
    ListNode* reverse(ListNode* head){
    ListNode *prev=NULL;
    ListNode *next=NULL;

    while(head!=NULL){
        next=head->next;
        head->next=prev;
        prev=head;
        head=next;
    }
    return prev;
}
    ListNode* middle(ListNode *head){
    
    ListNode *fast=head,*slow=head;
    
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        
        ListNode *mid=middle(head);
        mid->next= reverse(mid->next);
        mid=mid->next;
        while(mid!=NULL){
            if(head->val!=mid->val) 
                return false;
            
            head=head->next;
            mid=mid->next;
            
        }
        return true;
    }
};