class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int m=INT_MIN ;
        
        int cnt=1;
        int cnt1=1;
       for(int i=1; i<nums.size(); i++)
       {
           if(nums[i]>nums[i-1])
             cnt=cnt1+1;
           else if(nums[i]<nums[i-1])
               cnt1=cnt+1;
               
       }
       return max(cnt1,cnt);
    }
};