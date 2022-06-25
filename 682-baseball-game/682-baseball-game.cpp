class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
         for(string op : ops) {
            if (op=="+") {
                int top = st.top();
                st.pop();
                int newtop = top + st.top();
                st.push(top);
                st.push(newtop);
            } else if (op=="C") {
                st.pop();
            } else if (op=="D") {
                st.push(2 * st.top());
            } else {
                st.push(stoi(op));
            }
        }

        int ans = 0;
        while(!st.empty()){
            int score=st.top();
            st.pop();
            ans += score;
        } 
        return ans;
    }
};