class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        int max=INT_MIN,maxEle;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>nums.size()/2) maxEle=nums[i];
        }
            // for(auto it:mp){
            //     if(it.second>max){
            //         max=it.second;
            //         maxEle=it.first;
            //     }
            // }
        return maxEle;
    }
};