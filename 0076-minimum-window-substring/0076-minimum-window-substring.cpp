class Solution {
public:
    string minWindow(string s, string t) {
        int start = 0,end=0;
        int len = s.length();
        unordered_map<char,int> mp;
        for(auto i:t)
            mp[i]++;
        int count = mp.size();
        string ans = "";
        int res = INT_MAX;        
        while(end<len)
        {
            if(mp.find(s[end])!=mp.end())//character is in string t
            {
                mp[s[end]]--;
                if(mp[s[end]]==0)
                    count--;
            }
            if(count>0)//keep adding new character until entire t string is in window
            { 
                end++;
                continue;
            }
            
            while(mp.find(s[start])==mp.end()||mp[s[start]]<0)
            {
                if(mp.find(s[start])==mp.end())//character not a part of string t
                    start++;
                if(mp.find(s[start])!=mp.end())//character is in string t but more than required
                {
                    if(mp[s[start]]<0)
                    {
                        mp[s[start]]++;
                        start++;
                    }
                }
            }

            if(count==0)//all characters of string t exists in our window
            {
                if(res>(end-start+1))//current window is smaller than previous
                {
                    res = end-start+1;
                    ans = s.substr(start,res);
                }
            }
            
            end++;//move window for new possible answers
        }

        return ans;
    }
};