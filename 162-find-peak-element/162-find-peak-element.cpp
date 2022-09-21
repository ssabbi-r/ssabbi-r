class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        for(int i=1; i<n; i++)
        {
            if(nums[i]<nums[i-1])
                return i-1;
        }
        return n-1;
    }
};