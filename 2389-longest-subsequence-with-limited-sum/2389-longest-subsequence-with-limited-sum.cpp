class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& q) {
        sort(nums.begin(),nums.end());
        vector<long long>v;
        vector<int>vv(q.size(),0);
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
            for(int j=0; j<nums.size(); j++)
            {
                if(q[i]>=v[j])
                    vv[i]=j+1;
                else
                    break;
            }
        }
        return vv;
    }
};
                