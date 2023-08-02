class Solution {
public:
    void permutationbyFreq(vector<int>&nums,vector<vector<int>>&ans,vector<int>&freq,vector<int>&ds,int N){
        
        if(ds.size()==N){
            ans.push_back(ds);
            return;
        }
        
        for(int i=0;i<N;i++){
            if(freq[i]==0){
                ds.push_back(nums[i]);
                freq[i]=1;
                permutationbyFreq(nums,ans,freq,ds,N);
                ds.pop_back();
                freq[i]=0;
            }
        }
    }
    void permutationbySwaping(int ind ,vector<int>&nums,vector<vector<int>>&ans,vector<int>&ds,int N){
        
        if(ind==N){
            ans.push_back(nums);
            return;
        }
        
        for(int i = ind;i<N;i++){
            swap(nums[ind],nums[i]);
            permutationbySwaping(ind+1,nums,ans,ds,N);
            swap(nums[i],nums[ind]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int N = nums.size();
        vector<int>freq(N,0);
        vector<vector<int>>ans;
        vector<int>ds;
        // permutationbyFreq(nums,ans,freq,ds,N);
        permutationbySwaping(0,nums,ans,ds,N);
        return ans;
    }
};