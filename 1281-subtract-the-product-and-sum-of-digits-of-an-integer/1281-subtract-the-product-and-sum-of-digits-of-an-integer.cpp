class Solution {
public:
    int subtractProductAndSum(int n) {
        int x,y,ans=1,sum=0;
        
        while(n>0)
        {
           
            
            sum+=n%10;
            ans=ans*(n%10);
            n=n/10;
            
        }
        x=ans-sum;
        return x;
    }
};