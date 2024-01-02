class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto m:mp){
            cout<<m.first<<" "<<m.second<<endl;
        }
        cout<<"first check"<<endl;
        vector<vector<int>>ans;
        while(!mp.empty()){
            vector<int>temp;
           for (auto it = mp.begin(); it != mp.end(); ++it) {
             temp.push_back(it->first);
             mp[it->first]--;
             
            // Access the key using it->first and the value using it->second
            // std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
         }
         cout<<"after modification"<<endl;
          for(auto m:mp){
            cout<<m.first<<" "<<m.second<<endl;
        }
        for (auto itt = mp.begin(); itt != mp.end();) {
        if (itt->second == 0) {
            itt = mp.erase(itt);
        } else {
            ++itt;
        }
    }
         cout<<"after deletion"<<endl;
          for(auto m:mp){
            cout<<m.first<<" "<<m.second<<endl;
        }
           ans.push_back(temp);
        }
        // for(auto a:mp){
        //     if(a.second){
        //         temp.insert(a.first);
        //         a.second--;
        //     }
        //     if(a.second){
        //         mp.erase(a.first);
        //     }
        // }
        return ans;
    }
};