class Solution {
public:
    void solve(vector<int>& ds, vector<int>& mp,vector<vector<int>>& ans,vector<int>& nums){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(mp[i]==0){
                ds.push_back(nums[i]);
                mp[i]=1;
                solve(ds,mp,ans,nums);
                mp[i]=0;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
         vector<int> mp(nums.size(),0);
        solve(ds,mp,ans,nums);
        return ans;
        
    }
};