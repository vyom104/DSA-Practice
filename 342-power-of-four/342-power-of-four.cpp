class Solution {
public:
    bool result(int n){
        if(n==1) return true;
        if(n%4==0) return result(n/4);
        return false;
    }
    bool isPowerOfFour(int n) {
        if(n==0) return false;
        return result(n);
    }
};