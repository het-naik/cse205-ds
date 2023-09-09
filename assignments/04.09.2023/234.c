class Solution {
public:
    bool isPalindrome(ListNode* head) {
      vector<int> ans;
        ListNode* curr = head;
        while(curr){
            ans.push_back(curr->val);
            curr = curr->next;
        }
        for(int i = 0; i < ans.size()/2; i++){
            if(ans[i] != ans[ans.size()-1-i]){
                return false;
            } 
        }
        return true;
    }
};