class Solution {
public:
    string customSortString(string order, string s) 
    {
        string res;
        res.reserve(s.size());
        std::unordered_set<char> uset(order.begin(),order.end());
        std::unordered_map<char,int> umap;
        for(auto & ch:s)
        {
            umap[ch]++;
            if(uset.find(ch)==uset.end()) res+=ch;
        } 

        for(auto & ch:order)
        {
            if(umap.find(ch)!=umap.end())
                for(int i =0;i<umap[ch];i++)
                    res+=ch;
        }
        return res;
    }
};