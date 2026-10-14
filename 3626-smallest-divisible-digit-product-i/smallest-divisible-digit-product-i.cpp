class Solution {
public:
    int smallestNumber(int n, int t) {
        int num=1;
        int temp=n;
        while(n!=0){
            num=num*(n%10);
            n=n/10;
        }
        if(num%t==0)
        return temp;
        return smallestNumber(temp+1,t);
    }
};