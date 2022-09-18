class Solution {
public:
    int trap(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
      
      
        int maxl=0;
        int maxr=0;
        int res=0;
        while(l<=r)
        {
            if(height[l]<=height[r])
            {
                if(height[l]>=maxl)
                {
                    maxl=height[l];
                }
                else
                {
                    res=res+(maxl-height[l]);
                }
                l++;
            }
            else
            {
                if(height[r]>=maxr)
                {
                    maxr=height[r];
                }
                else
                {
                    res=res+(maxr-height[r]);
                }
                r--;
            }
        }
        return res;
    }
};