class Solution {
public:
    int ans = INT_MAX;
    void distribute(vector<int>& cookies,int k,vector<int>& CA,int idx){
        if(idx == cookies.size()){
            int m = INT_MIN;
            for(auto c:CA){
                m = max(c,m);
            }
            ans = min(ans,m);
            return;
        }
        
        for(int i=0;i<k;i++){
            CA[i]+=cookies[idx];
            distribute(cookies,k,CA,idx+1);
            CA[i]-=cookies[idx];
        }
    }
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int>CA(k,0);
        // int ans = INT_MAX;
        distribute(cookies,k,CA,0);
        return ans;
    }
};