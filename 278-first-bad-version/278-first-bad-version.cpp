// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int firstBad=0;
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=low+(high/2-low/2);
            if(isBadVersion(mid+1)){
                firstBad=mid+1;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return firstBad;
    }
};