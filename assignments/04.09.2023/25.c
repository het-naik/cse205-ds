class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
       if(head==NULL){
            return NULL;
        }
        int avaliable= k, cnt = 0;
        ListNode* temp = head;
        while(avaliable > 0 && temp != NULL){
            temp = temp -> next;
           avaliable--;
        }
        if(avaliable==0){
        ListNode* next=NULL;
        ListNode* curr=head;
        ListNode* prev=NULL;
        while(curr!=NULL && cnt<k){
            next=curr->next;
            curr->next=prev;
            prev =curr;
            curr=next;
            cnt++;
        }
        if(next!=NULL){
            head->next=reverseKGroup(next,k);
        }
        return prev;
        }
        return head; 
    }
};