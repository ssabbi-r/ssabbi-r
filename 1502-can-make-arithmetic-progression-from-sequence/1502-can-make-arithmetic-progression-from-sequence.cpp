class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int x=arr[1]-arr[0];
        int xx;
        bool f=true;
        for(int i=1; i<arr.size(); i++)
        {
            xx=arr[i]-arr[i-1];
            if(x!=xx)
                return false;
        }
     return f;   
    }
};