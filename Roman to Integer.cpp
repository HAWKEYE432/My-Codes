class Solution {
public:
   
    int romanToInt(string s) {
      unordered_map<char,int> num;
       num.insert({'I',1});
       num.insert({'V',5});
       num.insert({'X',10});
       num.insert({'L',50});
       num.insert({'C',100});
       num.insert({'D',500});
       num.insert({'M',1000});
       int ans=0;
       for(int i=s.length()-1;i>=0;i--)
       {
           if(num[s[i]]<num[s[i+1]])
           {
               ans=ans-num[s[i]];
           }
           else
           {
               ans=ans+num[s[i]];
           }
       }
       return ans;
    }
};