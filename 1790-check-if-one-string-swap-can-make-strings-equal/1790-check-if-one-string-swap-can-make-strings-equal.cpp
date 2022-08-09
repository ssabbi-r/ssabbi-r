class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
      int  n=s1.size();
      int c=0;
        
        for(int i=0; i<n; i++)
        {
            if(s1[i]!=s2[i])
                c++;
            
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1==s2 && c<=2)
            return true;
        else
            return false;
    }
};