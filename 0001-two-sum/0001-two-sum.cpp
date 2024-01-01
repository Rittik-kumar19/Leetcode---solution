class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        // sort(v.begin(),v.end());
        int i = 0;
        int j = n.size()-1;
        vector<pair<int,int>>v;
        for(int i=0;i<n.size();i++){
            v.push_back({n[i],i});
        }
        sort(v.begin(),v.end());
        while(i<j){
            if(v[i].first+v[j].first==t){
                break;
            }
            else if(v[i].first+v[j].first<t){
                i++;
            }
            else if(v[i].first+v[j].first>t){
                j--;
            }
        }
        return {v[i].second,v[j].second};
    }
};