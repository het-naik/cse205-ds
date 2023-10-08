class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        int count=0;
        for(int i=0;i<tickets.size();i++){
            q.push(i);
        }
        while(!q.empty()){
            ++count;
            int tmp=q.front();
            q.pop();
            if (tickets[tmp]>=1){
                tickets[tmp]-=1;
            }
            if (tmp!=k && tickets[tmp]==0){
                continue;
            }
            if (tmp==k && tickets[tmp]==0){
                break;
            }
            q.push(tmp);
        }
        return count;
    }
};