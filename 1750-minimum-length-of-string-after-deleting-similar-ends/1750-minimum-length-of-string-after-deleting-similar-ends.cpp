class Solution {
public:
    int minimumLength(string s) {

        int n = s.length();
        int i=0,j=n-1,ans = 0;
        char last_char;
        while(i<=j)
        {   
            if(i==j)
            { 
                if(s[i]==last_char)
                {
                    return 0;
                }
                return 1;
            }
            if(s[i]==s[j])
            { 
               last_char = s[i];
                i++;
                j--;
            }
            else
            {
                if(s[i]==last_char)
                {
                    i++;
                    
                }
                else if(s[j]==last_char)
                {
                    j--;
                    
                }
                else
                {    
                    ans = (j-i)+1;
                    break;
                }
            }

        }
       
        return ans;
        
    }
};