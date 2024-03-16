// class Solution {
// public:
//     int findMaxLength(vector<int>& nums) {
//         int n = nums.size();
//         int mx=0;
//         for(int i=0;i<n;i++){
//             int cnt0=0;
//             int cnt1=0;
//             int j = i;
//             if(nums[i]==0){
//                 cnt0++;
//             }
//             else{
//                 cnt1++;
//             }
//             while(j<n){
//                 if(i!=j){
//                     if(nums[j]==0){
//                         cnt0++;
//                     }
//                     else{
//                         cnt1++;
//                     }
//                 }
//                 // j++;
//                 if(cnt0==cnt1){
//                     // cout<<j<<" "<<i<<endl;
//                     mx=max(mx,(j-i+1));
//                 }
//                 j++;
//             }
//         }
//         return mx;
//     }
// };

// 00100011


class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int mx=0;
        int sum =0;
        for(int i=0;i<n;i++){
            nums[i]=(nums[i]==0)?-1:1;
        }
        map<int,int>m;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum==0){
                mx=max(mx,i+1);
            }
            else if(m.find(sum)!=m.end()){
                mx =max(mx,i-m[sum]);
            }
            else {
                m[sum]=i;
            }
        }
        return mx;
    }
};





































