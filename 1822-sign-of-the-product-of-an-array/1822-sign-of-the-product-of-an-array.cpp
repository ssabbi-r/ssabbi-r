class Solution {
public:
    int arraySign(vector<int>& nums) {
      int x=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==0)
                return 0;
            else if(nums[i]<0)
                x++;
        }
       if(x%2)
           return -1;
           else
               return 1;
    }
};