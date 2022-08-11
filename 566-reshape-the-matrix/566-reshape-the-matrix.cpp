class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
       int m=mat.size();
        int n=mat[0].size();
        int a=0;
        int b=0;
        if(n*m!=c*r)
            return mat;
        vector<vector<int>>v(r,vector<int>(c));
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                v[a][b++]=mat[i][j];
                
                if(b==c)
                {
                    a++;
                    b=0;
                }
            }
        }
        return v;
    }
};