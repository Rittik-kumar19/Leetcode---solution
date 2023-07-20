class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(int val:asteroids){
            if(val>0){
                st.push(val);
            }
            else{
                while(st.size()>0 and st.top()>0 and st.top()<-1*val){
                    st.pop();
                }
                if(st.size()>0 and st.top()==-1*val){
                    st.pop();
                }
                else if(st.size()>0 and st.top()>-1*val){
                    continue;
                }
                else{
                    st.push(val);
                }
            }
        }
        vector<int>ans;
        while(st.size()>0){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};