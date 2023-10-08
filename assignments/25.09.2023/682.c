class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s1;
        int ans=0;
        for (int i=0;i<operations.size();i++){
            if (operations[i]=="C"){
                s1.pop();
            }
            else if (operations[i]=="D"){
                int score=s1.top();
                s1.push(score*2);
            }
            else if (operations[i]=="+"){
                int x=s1.top();
                s1.pop();
                int y=s1.top();
                s1.push(x);
                s1.push(x+y);
            }
            else{
                s1.push(stoi(operations[i]));
            }
        }
        while(!s1.empty()){
            ans=ans+s1.top();
            s1.pop();
        }
        return ans;
    }
};