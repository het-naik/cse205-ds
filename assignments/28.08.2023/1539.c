class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> ans;
        int j=0;
        for (int i=1;i<=arr.size()+k;i++){
            if (j<arr.size()&&i==arr[j]){
                j++;
                continue;
            }
            ans.push_back(i);
        }
        return ans.size()<k ? -1 : ans[k-1];
    }
};