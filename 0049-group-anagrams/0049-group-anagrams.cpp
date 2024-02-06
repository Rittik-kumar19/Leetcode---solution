class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>vst;
        vector<string>vnew=strs;
        set<string>st;
        for(int i=0;i<vnew.size();i++){
            sort(vnew[i].begin(),vnew[i].end());
            st.insert(vnew[i]);
        }
        for(auto ss:st){
            vector<string>v;
            for(int i=0;i<strs.size();i++){
                // sort(vnew.begin(),vnew.end());
                if(ss==vnew[i]){
                    v.push_back(strs[i]);
                }
            }
            vst.push_back(v);
        }
        cout<<st.size()<<endl;
        return vst;
    }
}; 