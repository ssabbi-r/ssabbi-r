class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int i,j;
      int  mx=0;
     int   mn=prices[0];
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