class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int n=t.size();
        int m=s.size();
        int i=0,j=0,k=0,cnt=0;
        while(n!=0 && m!=0)
        {
            if(s[i]!=t[j])
            {
                j++;
                n--;
            }
            if(s[i]==t[j]){
                i++;
                j++;
                m--;
                n--;
            }
        }
        
        
        if(m)
            return false;
        else
            return true;
        
        
        
    }
};