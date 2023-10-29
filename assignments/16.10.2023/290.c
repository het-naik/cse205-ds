class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>words;
        int i=0, j=0;
        while(i<s.length()){
            string ans = "";
            while(s[j] != ' ' && j < s.length()){
                ans.push_back(s[j]);
                j++;
            }
            words.push_back(ans);
            i = j + 1;
            j = i;
        }
        if(pattern.length() != words.size()){
            return false;
        }
        unordered_map<char,string> m;
        unordered_map<string,bool> mp;
        for(int i = 0; i < words.size(); i++){
            mp[words[i]] = false;
        }
        for(int i = 0; i < pattern.length(); i++){
            if(m.find(pattern[i]) == m.end()){
                if(mp[words[i]] == false){
                    m[pattern[i]] = words[i];
                    mp[words[i]] = true;
                }
                else{
                    return false;
                }
            }
            else{
                string st = m[pattern[i]];
                if(st != words[i]){
                    return false;
                }
            }
        }
        return true;
    }
};