class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        // Approaches:
        // 1. BFA by simple iteration
        // 2. using map
        // 3. using set
        // 4. XOR is x ^ x = 0 , 0 ^ x = x
        // 5. Two pointer approach - (slow & fast)
        unordered_map<int,int>mp;
        for(int a: nums){
            mp[a]++;
        }
        int ans = 0;
        for(auto it:mp){
            cout<< it.first << "->" << it.second<<endl;
            if(it.second > 1){
                ans = it.first;
            }
        }
        return ans;
        
    }
};