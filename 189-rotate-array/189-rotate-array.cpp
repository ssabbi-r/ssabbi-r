class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size(),j=0;
        vector<int>v;
        k=k%n;
        if(k){
        for(int i=n-k; i<nums.size(); i++)
        {
           v.push_back(nums[i]);
        
        }
        for(int i=0; i<n-k; i++)
            
        {
            v.push_back(nums[i]);
        }
        for(int i=0; i<n; i++)
        {
            nums[i]=v[i];
        }
        }   
        
    }
};