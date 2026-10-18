class Solution {
public:
    string convertToBase7(int num) {
       string ans;
       if(num<0)
       {
        num=-num;
        while(num!=0){
            
            ans.push_back('0'+num%7);
            num/=7;
        }
       ans.push_back('-');
       reverse(ans.begin(), ans.end());
       }
       else if(num==0)return "0";
       else{
        while(num!=0){
            
            ans.push_back('0'+num%7);
            num/=7;
        }
         reverse(ans.begin(), ans.end());
        
    }
    
    return ans;
    }
};