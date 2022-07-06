class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;
        
        for(auto ch:t){
        if(ch ==  s[j]) j++;    
        }
        
        return j==s.length();
    }
};