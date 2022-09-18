class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> res;
        int p=1;
        for(int i=0;i<n;i++)
        {
            p=p*nums[i];
            res.push_back(p);
        }
        p=1;
        for(int i=n-1;i>0;i--)
        {
            res[i]=res[i-1]*p;
            p=p*nums[i];
        }
        res[0]=p;
        return res;
    }
};