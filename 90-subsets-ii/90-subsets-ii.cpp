class Solution {
public:
    void findSubsets(vector<vector<int>>&ans,vector<int>&v,vector<int>&nums,int i){
         ans.push_back(v);
        
    
    for(int j=i;j<nums.size();j++)
    {
        if(j!=i&&nums[j]==nums[j-1])
            continue;
        v.push_back(nums[j]);
        findSubsets(ans,v,nums,j+1);
        v.pop_back();
    }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
    vector<int>v;
    sort(nums.begin(),nums.end());
    findSubsets(ans,v,nums,0);
    return ans;
    }
};