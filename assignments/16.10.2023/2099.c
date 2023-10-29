class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq;
        vector<int>ans;
        vector<int>index;
        for (int i=0;i<nums.size();i++){
           pair<int,int> p=make_pair(nums[i], i);
           pq.push(p);
       }
        while (k--){
           pair<int,int> p=pq.top();
           pq.pop();
           index.push_back(p.second);
       }
        sort(index.begin(), index.end());
        for (int i=0; i<index.size();i++){
            ans.push_back(nums[index[i]]);
        }
        return ans;
    }
};