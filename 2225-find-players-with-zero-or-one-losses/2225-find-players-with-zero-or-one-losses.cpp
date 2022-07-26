class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> ans;
        map<int,int> win,lose;
        for(auto it: matches){
            win[it[0]]++;
            lose[it[1]]++;
        }
        vector<int> vwin,vlos;
        for(auto it:win){
            if(lose.find(it.first)==lose.end()){
                vwin.push_back(it.first);
            }
        }
        for(auto it:lose){
            if(it.second==1) vlos.push_back(it.first);
        }
        ans.push_back(vwin);
        ans.push_back(vlos);
        return ans;
    }
};