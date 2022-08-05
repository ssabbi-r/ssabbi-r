class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1;
        int mid,f=0;
        while(left<=right)
        {
            mid=(left+right)/2;
            if(nums[mid]==target)
            {
                f=1;
                break;
                
            }
            else if(nums[mid]>target)
                right=mid-1;
            else 
                left=mid+1;
            
        }
        if(f)
            return mid;
        else
            return -1;
        
    }
};