class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int sz1 = mp.size();
        set<int>st;
        for(auto m:mp){
            st.insert(m.second);
        }
        int sz2 = st.size();
        return (sz1==sz2);
    }
};