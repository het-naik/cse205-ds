class Solution {
public:
    int findNumbers(vector<int>& nums) {
       int ans=0;
       for (int i=0;i<nums.size();i++){
           int temp=nums[i];
           int digits=0;
           while (temp>0){
               temp=temp/10;
               digits++;
           }
           if (digits%2==0){
               ans++;
           }

       } 
       return ans;
    }
};