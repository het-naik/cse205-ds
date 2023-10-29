class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;
        vector<int> count(nums.size()+1,0);
        for (int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }
        for (int i=1;i<count.size();i++){
            if(count[i]>1){
                ans.push_back(i);
            }
        }
        for(int i=1;i<count.size();i++){
            if(count[i]==0){
                ans.push_back(i);
            }
        }
        return ans; 
    }
};