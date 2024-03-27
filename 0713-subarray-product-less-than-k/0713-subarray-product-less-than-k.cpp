class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& v, int k) {
        int ans = 1 , sum = 0 ;
        int ind1 = 0  , ind2 = 0;
        while(ind2 < v.size() and ind1 < v.size()){
            ans *= v[ind2] ;
            if(ans >= k){
                int cnt = ind2-ind1 ;
                sum += (cnt*(cnt+1)/2) ;
                int cnt2 =0 ;
                while(ind1 <= ind2){
                    if(ans < k) break ;
                    ans /= v[ind1] ;
                    ind1++; cnt2++ ;
                }
                cnt = max(0 , cnt-cnt2);
                sum -= (cnt*(cnt+1)/2) ;
            }
            ind2++;
        }
        // cout << ind1 << ind2 << endl ;
        int cnt = ind2-ind1 ;
        sum += (cnt*(cnt+1)/2) ;
        return sum ;
    }
};