class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());   //Sorted to be on safe side
        
        vector<int>temp=intervals[0];   //To store particular interval and compare with the rest of the intervals
        
//      Iterate through the intervals vector to go through each interval
        
        for(auto it:intervals)
        {
            //compare left element of an interval with right element of temp to check if merge happens
            if(it[0] <= temp[1]) 
            {   //updating temp right element for merging
                temp[1]=max(temp[1],it[1]); 
            }
            else
            {   //new interval found which can't be merged
                ans.push_back(temp);
                temp=it;    //updating temp
            }
        }
        ans.push_back(temp); //for including the last interval
        return ans;
    }
};