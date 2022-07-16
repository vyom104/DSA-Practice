class Solution {
public:
    map<long,long> mp;
    long long count(long long n){
        if(n==1) return 0;
        if(mp.find(n)!=mp.end()) return mp[n];
        if(n%2==0) return mp[n]=1+count(n/2);
        else return mp[n]= 1+min(count(n-1),count(n+1));
    }
    int integerReplacement(int n) {
        return count(n);
    }
};