class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        int i,j,k,x,y,z;
        for(i=0; i<nums.size(); i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue;
            j=i+1;
            k=nums.size()-1;
            while(j<k)
            {
                if((nums[i]+nums[j]+nums[k])==0)
                {
                    v.push_back({nums[i],nums[j],nums[k]});
                    x=nums[j];
                    while(j<k && nums[j]==x)
                        j++;
                    y=nums[k];
                    while(j<k && nums[k]==y)
                        k--;
                        
                }
                else if((nums[i]+nums[j]+nums[k])<0)
                    j++;
                else if((nums[i]+nums[j]+nums[k])>0)
                    k--;
            }
        }
        return v;
    }
};