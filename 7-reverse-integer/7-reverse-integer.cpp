class Solution {
public:
    int reverse(int x) {
        if(x>INT_MAX || x<INT_MIN) return 0;
        long long sum=0,temp=x,flag=0;
        if(x<0){
            flag=1;
            temp=(long long)x*-1;
        }
        while(temp>0){
            int rem=temp%10;
            sum=sum*10+rem;
            temp=temp/10;
        }
        if(flag)sum=sum*-1;
        if(sum>INT_MAX || sum<INT_MIN) return 0;
        return sum;
    }
};