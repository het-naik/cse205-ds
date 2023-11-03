class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        priority_queue<pair<int,int>> pq;
        vector<string> ans(n);
        for (int i=0;i<n;i++){
            pq.push({score[i],i});
        }
        int i=1;
        while(!pq.empty()){
            if(i==1){
                ans[pq.top().second]="Gold Medal";
            }
            if(i==2){
                ans[pq.top().second]="Silver Medal";
            }
            if(i==3){
                ans[pq.top().second]="Bronze Medal";
            }
            else if(i>3){
                ans[pq.top().second]=to_string(i);
            }
            i++;
            pq.pop();
        }
        return ans;
    }
};