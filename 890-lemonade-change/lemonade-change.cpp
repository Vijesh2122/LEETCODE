class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int f5=0;
        int f10=0;
        int f20=0;
        for(int i=0;i<bills.size();i++){
             
             if(bills[i]==5)f5++;
             else if(bills[i]==10 && f5>0){
                f10++;
                f5--;
             }
             else if(bills[i]==20 && (f5>0 && f10>0)){
                f20++;
                f5--;
                f10--;

             }

             else if(bills[i]==20 && f5>2){
                f20++;
                f5-=3;

             }
             else return false;
        }
        return true;
    }
};