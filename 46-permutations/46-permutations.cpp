class Solution {
public:
    void solve(int ind,vector<int>& nums,vector<vector<int>>& ans){
        if(ind==nums.size()-1){
            ans.push_back(nums);
            return;
        }
        for(int i=ind;i<nums.size();i++){
            int temp=nums[ind];
            nums[ind]=nums[i];
            nums[i]=temp;
            solve(ind+1,nums,ans);
             int t=nums[ind];
            nums[ind]=nums[i];
            nums[i]=t;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        
        solve(0,nums,ans);
        return ans;
        
    }
};