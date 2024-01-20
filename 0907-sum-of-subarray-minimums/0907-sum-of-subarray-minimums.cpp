typedef long long int ll; // Alias for long long int
const ll MOD = 1e9+7;
class Solution {
public:
    long long int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> NSL = findNSL(arr); // Nearest Smaller to the Left for each element in arr
        vector<int> NSR = findNSR(arr); // Nearest Smaller to the Right for ...^
        
        ll ans = 0;
        for(int i=0;i<n;i++)
        {
            ll left = NSL[i];
            ll right= NSR[i];
            
            if(left != -1)
                left = i - left;
            else
                left =i+1;
                
            if(right!=-1)
                right = right - i;
            else
                right =arr.size()- i;
            
            ans = ans + (arr[i] * left*right)%MOD;
        }
        return ans%MOD;
    }
    
    vector<int> findNSL(vector<int> arr)
    {
        vector<int> ans;
        stack<pair<int,int>> s; // pair<element,index>
        for(int i=0;i<arr.size();i++)
        {
            while(!s.empty() && arr[i] < s.top().first)
                s.pop();
            if(s.empty())
                ans.push_back(-1); // No smaller element
            else
                ans.push_back(s.top().second); 
            s.push({arr[i],i});
        }
        return ans;
    }
    vector<int> findNSR(vector<int> arr)
    {
        vector<pair<int,int>> stack; //just a different way to implement stack, the one above will work too
        vector<int> ans;
        for(int i=arr.size()-1;i>=0;i--) // Walk backwards
        {
            while(stack.size() >0 && arr[i] <= stack.back().first)
                stack.pop_back();
            if(stack.size()==0)
                ans.push_back(-1);
            else
                ans.push_back(stack.back().second);
            stack.push_back({arr[i],i});
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    
};