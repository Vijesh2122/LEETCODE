class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=prices[0];
        int maxprofit=0;
        for(int price:prices){
             minprice=min(price,minprice);
            int profit=price-minprice;
            maxprofit=max(maxprofit,profit);
            
        }
        return maxprofit;
    }
};