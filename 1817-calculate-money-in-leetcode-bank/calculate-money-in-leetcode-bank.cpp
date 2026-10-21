class Solution {
public:
    int totalMoney(int n) {
        int week=n/7;
        int day=n%7;
        int sum=0;
        int temp=week;
        for(int i=0;i<day;i++){
            sum+=temp+1;
            temp++;

        }
        while(week!=0){
            sum+=28+7*(week-1);
            week--;
        }
        return sum;

    }
};