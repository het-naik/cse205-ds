class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>s;
        map<int, int>m;
        vector<int>ans(nums1.size(), -1);
        for(int i = nums2.size() - 1; i >= 0; i--){
            int curr = nums2[i];
            while(!s.empty() && s.top() <= curr){
                s.pop();
            }
            if(s.empty()){
                m[nums2[i]] = -1;
                s.push(curr);
            }
            if(s.top() > curr){
                m[nums2[i]] = s.top();
                s.push(curr);
            }
        }
        for(int i = 0; i < nums1.size(); i++){
            ans[i] = m[nums1[i]];
        }
        return ans;
    }
};