class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxLen = 0;
        unordered_map<int, bool> elements;
        
        for(int i=0; i<nums.size(); i++)
            elements[nums[i]] = true;
        
        for(int i=0; i<nums.size(); i++) {
            int currEle = nums[i], len = 1;
            
            if(elements.find(currEle-1) != elements.end()) continue;
            
            while(elements.find(currEle + 1) != elements.end()) {
                len++;
                currEle += 1;
            }
            
            maxLen = max(len, maxLen);
        }
        
        return maxLen;
        // set<int> hashSet;
        // for(int it:nums){
        //     hashSet.insert(it);
        // }
        // int longestStreak=0;
        // for(int it:nums){
        //     if(!hashSet.count(it-1)){
        //         int curNum=it;
        //         int curStreak=1;
        //         while(hashSet.count(curNum+1)){
        //             curNum++;
        //             curStreak++;
        //         }
        //         longestStreak=max(longestStreak,curStreak);
        //     }
        // }
        // return longestStreak;
    }
};