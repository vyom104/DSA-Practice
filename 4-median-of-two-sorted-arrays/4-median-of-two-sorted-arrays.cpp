class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans;
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(),nums1.end());
        int n=nums1.size();
        if(n%2!=0){
            ans=(double) nums1[n/2];
        }else{
            int i=(n/2) -1;
            ans=(nums1[i]+nums1[i+1])/2.0;
        }
        return ans;
    }
};