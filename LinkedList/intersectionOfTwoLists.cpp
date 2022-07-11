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
    int length(ListNode* head){
    int c=0;
    while(head != NULL) {
        head = head->next;
        c+=1;
    }
    return c;
}
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int m=length(headA);
        int n=length(headB);
        ListNode *currA  = headA;
        ListNode *currB  = headB;
        int x=abs(m-n);
        if(m>n){
            while(x--) currA=currA->next;
        }
        else{
            while(x--) currB=currB->next;
        }
        
        while(!(currA == currB)){
            currA=currA->next;
            currB=currB->next;
        }
        return currA;
    }
};