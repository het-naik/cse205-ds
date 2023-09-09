class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
      if (headA==NULL || headB==NULL){
          return NULL;
      }  
      ListNode* tmp=headA;
      ListNode* tmp1=headB;
      while (tmp!=tmp1){
          tmp= tmp==NULL? headB : tmp->next;
          tmp1= tmp1==NULL? headA : tmp1->next;
      }
      return tmp;
    }
};