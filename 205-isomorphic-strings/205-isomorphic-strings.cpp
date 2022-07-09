class Solution {
public:
    bool helper(string s, string t,int n){
        map<char,char> mp;
        for(int i=0;i<n;i++){
                mp[s[i]]=t[i];
        }
        for(int i=0;i<n;i++){
                s[i]=mp[s[i]];
        }
        for(int i=0;i<n;i++){
                if(s[i]!=t[i]) return false;
        }
        return true;
    }
    bool isIsomorphic(string s, string t) {
       if(s.length() != t.length()) return false;
       int n=s.length();
        if(n==1) return (s[0]==t[0]);
        return helper(s,t,n) && helper(t,s,n);
    }
};