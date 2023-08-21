class Solution {
public:
    void combination(int curr, int k, int n, vector<vector<int>>& res, vector<int>& arr){
        if (k==0){
            res.push_back(arr);
            return;
        }
        if (curr>n){
            return;
        }
        arr.push_back(curr);
        combination(curr+1,k-1,n,res,arr);

        arr.pop_back();
        combination(curr+1,k,n,res,arr);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> arr;
        combination(1,k,n,res,arr);
        return res;
    }
};