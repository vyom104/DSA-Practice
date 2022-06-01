class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int arr[n+1];
         memset(arr, 0, sizeof(arr));
        for(auto it:nums){
            arr[it]++;
        }
        for(int i=0;i<n+1;i++){
            if(arr[i]==0) return i;
        }
        return 0;
    }
};