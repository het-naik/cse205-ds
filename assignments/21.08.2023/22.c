class Solution {
    void solve(vector<string>& result,int open, int close, int n,string curr){
        if (curr.length()==2*n){
            result.push_back(curr);
        }
        else{
            if (open<n){
                solve(result,open+1,close,n,curr+"(");
            }
            if (close<open){
                solve(result,open,close+1,n,curr+")");
            }
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        solve(result,0,0,n,"");
        return result;
    }
};