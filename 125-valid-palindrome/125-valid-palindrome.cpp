class Solution {
public:
    bool isPalindrome(string s) {
        string res ;
        
        for(int i=0; i<s.length(); i++){
            if(s[i] >= 'a' and s[i] <='z'){
                res += s[i];
            }
            else if(s[i] >= 'A' and s[i] <='Z'){
                res += (s[i] + 32);
            }
            else if(s[i] >= 48 and s[i]<= 57){
                res += s[i];
            }
        }
        
        string ans = res ;
        reverse(ans.begin(),ans.end());
        
        if(ans==res) return true;
        else return false;
    }
};