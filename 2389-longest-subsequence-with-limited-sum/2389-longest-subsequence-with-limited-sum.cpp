class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& q) {
        sort(nums.begin(),nums.end());
        vector<long long>v;
        vector<int>vv;
        long long sum=0;
        for(int i=0; i<nums.size(); i++)
        {
            sum+=nums[i];
            v.push_back(sum);
        }
        int m=q.size();
        int n=nums.size();
        for(int i=0; i<q.size(); i++)
        {
            int a=q[i];
                vector<long long>::iterator it;
            it=upper_bound(v.begin(),v.end(),a);
            int b=it-v.begin();
            vv.push_back(b);
            
        }
        return vv;
    }
};
                