class Solution {
public:
    int titleToNumber(string columnTitle) {
       int n=columnTitle.size();
       int k,i=0;long long sum=0;
       for(i=0;i<columnTitle.size();i++){
       int m=(int)columnTitle[i]-64;
       sum+=m*pow(26,n-1);
       n--;
 }
 return sum;
    }
};