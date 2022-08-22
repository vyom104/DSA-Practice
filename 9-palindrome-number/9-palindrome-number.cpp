class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        unsigned int t,num,sum=0;
        num=x;
        while(num){
            sum=sum*10+num%10;
            num/=10;
        }
        if(x==sum){
            return true;
        }
        return false;
    }
};