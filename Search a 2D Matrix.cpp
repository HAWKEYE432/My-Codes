class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0)
       {
           return false;
       }
        int m=matrix[0].size();
           int n=matrix.size();
       int s=0;
        int e=(n*m)-1;
     
         
        while(s<=e){
            int mid=s+(e-s)/2;
            int element=matrix[mid/m][mid%m];
            if(element==target)
            {
                return true;
                
                    
            }
            if(element>target)
            {
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
           
        return false;
    }
};