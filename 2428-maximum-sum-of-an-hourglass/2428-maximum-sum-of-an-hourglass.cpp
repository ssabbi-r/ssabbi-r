class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int m=INT_MIN;
        int sum=0;
        int row=grid.size();
        int a,x;
        int column=grid[0].size();
        for(int i=0; i<=row-3; i++)
        {
           for(int j=0; j<=column-3; j++)
           {
               x=0;
                for(int k=j; k<j+3; k++)
                {
                    x+=grid[i][k];
                    x+=grid[i+2][k];
                }
               x+=grid[i+1][j+1];
               
               m=max(m,x);
           }
        }
        return m;
    }
};