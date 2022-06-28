class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int ans=0;
        long long sum=0,leftSum=0;
        for(int it:nums) sum+=it;
        for(int i=0;i<nums.size()-1;i++){
            leftSum+=nums[i];
            if(leftSum>=sum-leftSum) ans++;
        }
        return ans;
    }
};