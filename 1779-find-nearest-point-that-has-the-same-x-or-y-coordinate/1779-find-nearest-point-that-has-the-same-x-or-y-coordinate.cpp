class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int index=-1;
        int mindistance=INT_MAX;
        int d;
        int c,cc;
        for(int i=0; i<points.size(); i++)
        {
            c=points[i][0];
            cc=points[i][1];
            if(x==c || y==cc)
            {
                d=abs(x-c)+abs(y-cc);
                 if(d<mindistance){
                mindistance=d;
              index=i;
            }
            }
           
        }
        return index;
    }
};