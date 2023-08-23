class Solution {
public:
    void solve(vector<int>& arr, int target, vector<int>& output, vector<vector<int>>& ans, int ind){
        if (ind>=arr.size()){
            if (target<=0){
                ans.push_back(output);
            }
            return;
        }
        if (arr[ind]<=target){
            output.push_back(arr[ind]);
            solve(arr,target-arr[ind],output,ans,ind);
            output.pop_back();
        }
        solve(arr,target,output,ans,ind+1);
    }
    public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> output;
        vector<vector<int>> ans;
        solve(candidates,target,output,ans,0);
        return ans;
    }
};