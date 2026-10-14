class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++){
            int n = 'z' - s[i] + 1;
            sum=sum+n*(i+1);
        }
        return sum;
    }
};