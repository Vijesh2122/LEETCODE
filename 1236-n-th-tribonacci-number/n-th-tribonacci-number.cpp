class Solution {
public:
    int tribonacci(int n) {
        if(n<2)return n;
        if(n==2)return 1;
        int p1=0;
        int p2=1;
        int p3=1;
        for(int i=3;i<n;i++){
           int s=p1+p2+p3;
            p1=p2;
            p2=p3;
             p3=s;
    }
    return p1+p2+p3;
    }
};