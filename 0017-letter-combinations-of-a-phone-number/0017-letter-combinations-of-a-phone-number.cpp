class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string>res;
        if(digits.size()==0)
            return res;
        res.push_back("");
        map<char,string>m;
        m.insert({'2',"abc"});
        m.insert({'3',"def"});
         m.insert({'4',"ghi"});
         m.insert({'5',"jkl"});
         m.insert({'6',"mno"}); 
         m.insert({'7',"pqrs"});
         m.insert({'8',"tuv"});
         m.insert({'9',"wxyz"});
        for(int i=0;i<digits.size();i++)
        {
            string s= m[digits[i]];
            vector<string>v;
            for(int j=0;j<s.size();j++)
            {
                for(int k=0;k<res.size();k++)
                    v.push_back(res[k]+s[j]);   
            }
           res=v ;
        }
       return res;
    }
};