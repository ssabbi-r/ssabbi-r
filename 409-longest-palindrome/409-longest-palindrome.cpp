class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>m;
        vector<char>v;
        int i,j,k=0,c=0,mn=0;
        for(i=0; i<s.size(); i++)
        {
            m[s[i]]++;
            
        }
        sort(s.begin(),s.end());
        for(i=1; i<s.size(); i++)
        {
            if(s[i-1]!=s[i])
                v.push_back(s[i-1]);
        }
        v.push_back(s[i-1]);
        for(i=0; i<v.size(); i++)
        {
             if(m[v[i]]%2==1)
            {
                
                 c+=m[v[i]]-1;
                 k=1;
                
            }
            else
            {
                c+=m[v[i]];
                
            }
        }
        if(k)
            return c+1;
        else
        
        return c;
    }
};