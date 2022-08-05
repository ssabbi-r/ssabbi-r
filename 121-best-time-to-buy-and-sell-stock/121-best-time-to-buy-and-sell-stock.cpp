class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int i,j,k,mx,mn,n;
        mx=0;
        mn=prices[0];
        for(i=0; i<prices.size(); i++)
        {
            if(prices[i]<mn)
                mn=prices[i];
            else
                mx=max(mx,prices[i]-mn);
        }
        return mx;
    }
};