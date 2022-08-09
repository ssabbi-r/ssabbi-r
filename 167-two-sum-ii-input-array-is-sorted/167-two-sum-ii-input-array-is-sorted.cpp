class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i,c,j;
        unordered_map<int,int>m;
        for(i=0; i<numbers.size(); i++)
        {
            c=target-numbers[i];
            if(m.find(c)==m.end())
            {
                m[numbers[i]]=i+1;
            }
            else
            {
                return {(m.at(c)),i+1};
            }
        }
        return {};
    }
};