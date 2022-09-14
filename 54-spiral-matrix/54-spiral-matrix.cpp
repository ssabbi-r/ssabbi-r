class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row =matrix.size();
        int column=matrix[0].size();
        int left=0,right=column-1,top=0,bottom=row-1;
        int counter=0;
        vector<int>v;
        while(top<=bottom && left<=right)
        {
            if(counter==0)
            {
                for(int i=left; i<=right; i++)
                
                    v.push_back(matrix[top][i]);
                    
                
                top++;
                
                
            }
         else if(counter==1)
            {
                for(int i=top; i<=bottom; i++)
                    v.push_back(matrix[i][right]);
                right--;
                
            }
         else if(counter==2)
            {
                for(int i=right; i>=left; i--)
                
                    v.push_back(matrix[bottom][i]);
                   
                
                 bottom--;
                
            }
        else  if(counter==3)
            {
                for(int i=bottom; i>=top; i--)
                
                    v.push_back(matrix[i][left]);
                    
                
                left++;
                
                
            }
            counter=(counter+1)%4;
        }
        return v;
        
    }
};