class Solution {
public:
    double average(vector<int>& s) {
        sort(s.begin(),s.end());
        int n=s.size(),sum=0;
        for(int i=1; i<n-1; i++)
        {
            sum+=s[i];
        }
        double t=(double)sum;
        double avg=t/(n-2);
        return avg;
    }
};