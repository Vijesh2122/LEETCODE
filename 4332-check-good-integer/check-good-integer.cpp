class Solution {
public:
    bool checkGoodInteger(int n) {
        int digitsum=0;
        int squaresum=0;
        while(n!=0){
            digitsum = digitsum + n%10;
            squaresum = squaresum +(n%10)*(n%10);
            n=n/10;
        }
        if((squaresum-digitsum)>=50)
        return true;
        return false;
    }
};