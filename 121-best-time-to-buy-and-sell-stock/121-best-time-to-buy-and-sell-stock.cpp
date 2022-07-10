class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pro=0;
        int mini=1e9;
        for(int i=0;i<prices.size();i++){
            mini=min(mini,prices[i]);
            pro=max(pro,prices[i]-mini);
        }
        return pro;
    }
};