class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int a=logs[0][0];
        int b=logs[0][1];
        for(int i=1; i<logs.size(); i++)
        {
          if(b<logs[i][1]-logs[i-1][1])
          {
              a=logs[i][0];
              b=logs[i][1]-logs[i-1][1];
          }
            else if(b==logs[i][1]-logs[i-1][1])
            {
                a=min(a,logs[i][0]);
            }
        }
        return a;
    }
};