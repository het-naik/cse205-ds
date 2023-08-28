class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    int count=0;
    int temp=0;
        for (int i=0;i<nums.size();i++){
            
            if (nums[i]==1){
               count++; 
            }
            else{
                if (count>temp){
                    temp=count;
                }
                count=0;
            }

        }
        if (count>temp){
            return count;
        }
        return temp;
        
    }
};