class Solution {
public:
    string reverseWords(string s) {
        string ss="";
        string ans="";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==' ')
            {
                reverse(ss.begin(),ss.end());
                ans+=ss+' ';
                ss="";
            }
            else
            ss+=s[i];
            if(i==s.size()-1)
            {
                reverse(ss.begin(), ss.end());
                ans+=ss;
            }
        }
        
        return ans;
    }
};