class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
      vector<int>freq(101,0);
      int maxfreq=0;
      int count=0;
      sort(nums.begin(),nums.end());
      for(int i=0;i<nums.size();i++)
      {
          freq[nums[i]]++;
          maxfreq=max(maxfreq,freq[nums[i]]);
      }
     
      for(int i=0;i<freq.size();i++)
      {
          if(maxfreq==freq[i])
          count++;
           
      }
      return maxfreq*count;
    }
};