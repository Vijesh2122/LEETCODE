class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        vector<int>ans(n+1,INT_MAX);
        ans[0]=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=3;j++){
                if(i-j>=0){
                    ans[i]=min(ans[i],ans[i-j]+costs[i-1]+j*j);
                }
            }
        }
        return ans[n];
        

    }
};