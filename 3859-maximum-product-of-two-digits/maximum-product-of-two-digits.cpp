class Solution {
public:
    int maxProduct(int n) {
        int max=0;
        int sec=0;
        while(n!= 0){
            
            if(n%10>=max){
                sec=max;
                max=n%10;
            }
            if(n%10<max && n%10>sec)
            sec=n%10;
            
            n=n/10;
            
        }
        return max*sec;
    }
};