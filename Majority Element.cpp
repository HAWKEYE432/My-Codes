class Solution {
public:
    int majorityElement(vector<int>& nums) {
           int ma= nums[0];
       int count=1;
        int n=nums.size();
       for(int i=1;i<n;i++)
       {
           if(nums[i]==ma)
           {
               count++;
           }
           else
           {
               count--;
           }
           if(count==0)
           {
               ma=nums[i];
               count=1;
           }
       }
       int c=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==ma)
            {
                c++;
            }
        }
        if(c>n/2)
        
            
        return ma;
        else
            return -1;
       
        
    }
};