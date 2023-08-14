class Solution {
    public:
    void reverse(vector<char>& s,int start){
        int end=s.size()-start -1;
        if (start>=end){
            return;
        }
        swap(s[start],s[end]);
        start++;
        end--;

        reverse(s,start);
    }
    public:
    void reverseString(vector<char>& s){
        reverse(s,0);
    }
};