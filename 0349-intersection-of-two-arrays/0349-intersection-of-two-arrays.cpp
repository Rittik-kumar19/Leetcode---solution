// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//       // put the values in set to remove duplicate
//         set<int>s1,s2;
//         vector<int>out;
//         for(auto val:nums1)
//             s1.insert(val);
//         for(auto val:nums2)
//             s2.insert(val);
        
//         //find if we can get the value from first set in second set
//         for(auto val:s1)
//         {
//            if(s2.find(val)!=s2.end()) //if found push it into output vector
//                out.push_back(val);
//         }
//         return out;
//     }
// };


//Two pointer

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
     int m = nums1.size();
     int n = nums2.size();
     sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>v;
        // int i=0,j=0;
        for(int i=0,j=0;i<m and j<n;){
            if(nums1[i]==nums2[j]){
                int val = nums1[i];
                v.push_back(val);
                while(i<m and nums1[i]==val){
                    i++;
                }
                while(j<n and nums2[j]==val){
                    j++;
                }
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
            else if(nums2[j]>nums1[i]){
                i++;
            }
        }
        return v;
    }
};
