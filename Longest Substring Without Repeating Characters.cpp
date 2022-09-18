class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<bool> arr(256,0);
        int ans=0,j=0;
        for(int i=0;i<s.size();i++){
            if(arr[s[i]]==false){
                ans = max(ans,i-j+1);
                arr[s[i]]=true;
            }else{
                arr[s[j]]=false;
                j++;
                i--;
            }
        }
        return ans;
    }
    
};