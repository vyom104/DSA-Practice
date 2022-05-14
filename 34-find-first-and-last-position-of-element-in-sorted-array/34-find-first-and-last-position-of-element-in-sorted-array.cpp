class Solution {
public:
    int upper_bound(vector<int> &nums, int target){
        int low = 0;
        int high = nums.size() - 1;
        int temp = -1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(nums[mid] == target){
                // These two line are the Essence point of the code
                temp = mid;
                low = mid+1;
            }
            else if(nums[mid] > target){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return temp;
    }
    int lower_bound(vector<int> &nums, int target){
        int low = 0;
        int high = nums.size() - 1;
        int temp = -1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(nums[mid] == target){
                // These two line are the Essence point of the code
                temp = mid;
                high = mid-1;
            }
            else if(nums[mid] > target){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return temp;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        return {lower_bound(nums,target),upper_bound(nums,target)};
    }
};