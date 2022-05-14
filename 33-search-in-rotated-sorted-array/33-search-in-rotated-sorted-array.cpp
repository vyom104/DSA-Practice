class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
       // sort(nums.begin(),nums.end());
        while(low<=high){
            if(nums[low]==target) return low;
           if(nums[high]==target) return high;
            low++;
            high--;
        }
        return -1;
    }
};