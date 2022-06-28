class Solution {
public:
    int sumLeft(vector<int>& nums,int ind){
        int ans=0;
        for(int i=0;i<ind;i++){
            ans+=nums[i];
        }
        return ans;
    }
    int sumRight(vector<int>& nums,int ind){
        int ans=0;
        for(int i=ind+1;i<nums.size();i++){
            ans+=nums[i];
        }
        return ans;
    }
    int pivotIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int left=sumLeft(nums,i);
            int right=sumRight(nums,i);
            if(left==right) return i;
        }
        return -1;
    }
};