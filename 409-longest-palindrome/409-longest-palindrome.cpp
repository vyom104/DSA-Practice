class Solution {
public:
    int longestPalindrome(string s) {
       map <char, int> alpha_freq;
    for(int i = 0; i < s.length(); i++) alpha_freq[s[i]]++;
	
    int pairs = 0;
    int has_odd = 0;

    for(pair<char, int> i : alpha_freq){
        int cur_freq = i.second;
        pairs += cur_freq / 2;
        if(cur_freq % 2 == 1) has_odd = 1;
    }

    return pairs * 2 + has_odd;
    }
};