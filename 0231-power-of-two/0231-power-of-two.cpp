class Solution {
public:
    bool isPowerOfTwo(int n) {
        if((n>(1ll<<31)) or (n<=(-2147483648))){
            return false;
        }
        if(n==0){
          return false;  
        }
        if((n&(n-1))){
            return false;
        }
        else{
            return true;
        }
    }
};