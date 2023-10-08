class Solution {
public:
    string removeStars(string s) {
       stack<char> s1;
       string str1;
       for (int i=0;i<s.size();i++){
           if (s[i]=='*'){
               s1.pop();
           }
           else{
               s1.push(s[i]);
           }
       }
       while (!s1.empty()){
           str1.push_back(s1.top());
           s1.pop();
       } 
       reverse(str1.begin(),str1.end());
       return str1;
    }
};