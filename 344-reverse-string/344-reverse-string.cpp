class Solution {
public:
    void reverseString(vector<char>& s) {
        char c;
        vector<char>v(s.begin(),s.end());
       int n=s.size(),j;
        for(int i=n-1,j=0; i>=0,j<n; i--,j++)
        {
            s[j]=v[i];
        }
    }
};