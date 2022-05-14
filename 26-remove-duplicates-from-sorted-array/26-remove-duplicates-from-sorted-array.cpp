class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,curr=nums[0];
        for(int j=1;j<nums.size();j++){
            if(nums[j]!=curr){
                nums[++i]=nums[j];
                curr=nums[j];
            }
        }
            
        return i+1;
    }
};