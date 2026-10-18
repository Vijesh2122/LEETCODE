class Solution {
public:
    int arrangeCoins(int n) {
        long long sum=0;
        int i;
        for(i=1;i<=n;i++){
            sum+=i;
            if(n<sum)
            return i-1;

        }
        return i-1;
    }
};