class Solution {
public:
    bool isPalindrome(string s) {
        string word="";
        for(int i=0;i<s.length();i++)
        {
            if((s[i]>='A' && s[i]<='Z') ||(s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))
            {
                word+= tolower(s[i]);
            }
        }
        int l=0;int h=word.length()-1;
        while(l<=h)
        {
            if(word[l]!=word[h])
                return false;
            l++;
            h--;
        }
        return true;
    }
};