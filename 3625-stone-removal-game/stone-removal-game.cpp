class Solution {
public:
    bool canAliceWin(int n) {
        for(int i=10;i>0;i--){
           if(n>=0) {
            n-=i;
            if(n<0 && i%2==1)return true;
        }
        }
        return false;
    }
};