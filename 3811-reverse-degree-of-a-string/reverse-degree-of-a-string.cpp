class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++){
            int n=abs(s[i]-'{');
            sum=sum+n*(i+1);
        }
        return sum;
    }
};