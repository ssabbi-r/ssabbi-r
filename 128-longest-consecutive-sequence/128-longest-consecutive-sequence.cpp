class Solution {
public:
    int longestConsecutive(vector<int>& n) {
        if(n.size()==0)
            return 0;
        sort(n.begin(),n.end());
        int c=1;
        int mx=0;
        
        for(int i=1; i<n.size(); i++)
        {
            if(n[i]==n[i-1])
                continue;
            else if(n[i]==n[i-1]+1)
                c++;
            else
            {
                mx=max(mx,c);
                c=1;
            }
            
        }
        return max(mx,c);
    }
};