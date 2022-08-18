class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int i,n=s.size(),j=0,k=0;
        map<char,int>mp;
      for(i=0; i<n; i++)
      {
          if(mp.find(s[i])!=mp.end() && mp[s[i]]>=j)
          {
              j=mp[s[i]]+1;
          }
          mp[s[i]]=i;
          k=max(k,i-j+1);
      }
        return k;
    }
};