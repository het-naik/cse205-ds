class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
       ListNode* tmp = head;
        ListNode* ans = new ListNode(tmp->val);
        ans->next = NULL;
        ListNode* ans1 = ans;
        tmp=tmp->next;
        while(tmp!=NULL){
            ListNode* curr = ans1;
            ListNode* nxt = curr->next;
            ListNode* temp = new ListNode(tmp->val);
            if(temp->val < ans1->val){
                temp->next = ans1;
                ans1 = temp;
            }
            else{
                while(nxt!=NULL){
                    if(temp->val < nxt->val){
                        temp->next = nxt;
                        curr->next = temp;
                        break;
                    }
                    nxt=nxt->next;
                    curr=curr->next;
                }
                if(nxt==NULL){
                    curr->next = temp;
                }      
            }
            tmp=tmp->next;
        }
        return ans1;  
    }
};