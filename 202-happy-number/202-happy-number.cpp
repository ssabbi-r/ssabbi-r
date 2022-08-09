class Solution {
public:
    bool isHappy(int n) {
     set<int>s;
        while(s.count(n)==0)
        {
           int sum=0;
            s.insert(n);
            if(n==1)
                return true;
            
            while(n)
            {
                sum+=(n%10)*(n%10);
                n=n/10;
            }
            n=sum;
        }
        return false;
    }
};