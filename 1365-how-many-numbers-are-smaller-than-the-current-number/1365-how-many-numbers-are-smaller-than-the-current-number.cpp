class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        if(nums.size()==1){
            ans.push_back(0);
            return ans;
        }
        int count;
        for(int i=0;i<nums.size();i++){
            count=0;
            int num=nums[i];
            for(int j=0;j<nums.size();j++){
                if(nums[j]<nums[i])count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};