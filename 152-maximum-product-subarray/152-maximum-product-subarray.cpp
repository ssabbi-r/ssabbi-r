class Solution {
public:
    int maxProduct(vector<int>& a) {
       int c=1;
        int m=INT_MIN;
        int l=1;
        int r=1;
        int n=a.size();
        for(int i=0; i<a.size(); i++)
        {
            l=l*a[i];
            r=r*a[n-1-i];
            m=max(m,max(l,r));
            if(l==0)
                l=1;
            if(r==0)
                r=1;
        }
        return m;
    }
};