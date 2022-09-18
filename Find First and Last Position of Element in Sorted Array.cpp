class Solution {
public:
    int findfirst(vector<int>& nums, int target)
    {
        int s=0;
        int e=nums.size()-1;
        int ans1=-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                ans1=mid;
                e=mid-1;
                
            }
            else if(target<nums[mid])
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
            
        }
        return ans1;
    } 
    int secondocc(vector<int>& nums, int target)
    {
        int s=0;
        int e=nums.size()-1;
        int ans2=-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                ans2=mid;
                s=mid+1;
                
            }
            else if(target<nums[mid])
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
            
        }
        return ans2;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int> res;
        res.push_back(findfirst(nums,target));
         res.push_back(secondocc(nums,target));
        return res;
        
    }
};