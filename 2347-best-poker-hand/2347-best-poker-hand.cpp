class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        string st;
        //flush
        int count=0;
        for(int i=0;i<=3;i++){
            if(suits[i]==suits[i+1]) count++;
        }
        if(count==4) return st="Flush";
        //Three of a Kind
        map<int,int> mp;
        for(auto it:ranks) mp[it]++;
        int max=0;
        for(auto it : mp){
            if(it.second>max)max=it.second;
        }
        if(max>=3) return st="Three of a Kind";
        //Pair
        if(max>=2) return st="Pair";
        //High Card
        return st="High Card";
    }
};