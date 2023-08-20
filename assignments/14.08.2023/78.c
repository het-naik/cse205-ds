class Solution {
   void rec_subsets(vector<int>& nums, int ind, vector<vector<int>>& result){
      if (ind==nums.size()-1){
         result.push_back({});
         result.push_back({nums[ind]});
      }
      else{
         rec_subsets(nums,ind+1,result);
         int n=result.size();
         for (int i=0;i<n;++i){
            vector<int> r=result[i];
            r.push_back(nums[ind]);
            result.push_back(r);
         }
      }
   }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        if (nums.empty()) return {{}};
        vector<vector<int>> result;
        rec_subsets(nums,0,result);
        return result;    
    }
};