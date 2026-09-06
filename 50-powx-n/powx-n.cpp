class Solution {
public:
    double myPow(double x, int n) {
        double m=1;
        if(x==1||x==0){
            return x;
        }
        
        if(x==-1){
            if(n%2==0)
            return 1;
            else
             return -1; 
        }
        if(n<-2147483647)
        return 0;
       if(n>0){

        while(n!=0){
           m= m*x;
            n=n-1;
        }
       }
       else if(n<0){
        while(n!=0){
            m=m/x;
            n=n+1;
        }
       }
       else{
        m=1;
       }
       return m;
    }
};