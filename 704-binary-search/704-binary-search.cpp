class Solution {
public:
    int search(vector<int>& num, int target) {
        int high=num.size()-1;
        int low=0;
        while(low<=high){
           int mid=(low + high/2 - low/2);
            if(num[mid]==target) return mid;
            if(num[mid]<target){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return -1;
    }
};