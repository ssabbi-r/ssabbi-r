class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cursum=0;
        int maxsum=INT_MIN;
        
        for(int i=0; i<nums.size(); i++)
        {
           cursum=cursum+nums[i];
            if(nums[i]>cursum)
                cursum=nums[i];
            if(cursum>maxsum)
                maxsum=cursum;
        }
        
        return maxsum;
    }
};