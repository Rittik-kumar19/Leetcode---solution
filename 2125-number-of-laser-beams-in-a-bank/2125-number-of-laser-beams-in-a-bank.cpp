class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>v;
        if(bank.size()<=1){
            return 0;
        }
        for(int i=0;i<bank.size();i++){
            int count = 0;
            for(int j = 0;j<bank[i].size();j++){
                if(bank[i][j]=='1'){
                    count++;
                }
            }
            v.push_back(count);
        }
        vector<int>temp;
        for(int k=0;k<v.size();k++){
            if(v[k]){
                temp.push_back(v[k]);
            }
        }
        int ans = 0;
        for(int p =0;p<temp.size();p++){
            cout<<temp[p]<<" ";
        }
        cout<<endl;
        if(temp.size()<=1){
            return 0;
        }
        for(int p = 0;p<temp.size()-1;p++){
            ans = ans + temp[p]*temp[p+1];
        }
        return ans;
    }
};