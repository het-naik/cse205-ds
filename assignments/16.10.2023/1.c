class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>temp = nums;
        int i=0; 
        int j=nums.size()-1;
        sort(temp.begin(),temp.end());
        while (i<=j){
            if(temp[i] + temp[j] > target){
                j--;
            }
            else if(temp[i] + temp[j] < target){
                i++;
            }
            else{
                break;
            }
        }
        int ans1 = temp[i];
        int ans2 = temp[j];
        vector<int>ans;
        int x = 0;
        while(x < nums.size()){
            if(nums[x] == ans1){
                ans.push_back(x);
                break;
            }
            x++;
        }
        int y = 0;
        while(y < nums.size()){
            if(nums[y] == ans2 && y != x){
                ans.push_back(y);
                break;
            }
            y++;
        }
        return ans;
    }
};