class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n!=1  && n%2!=0 )
        return false;
        if(n==0)
        return false;

        if(n==1 || n==2|| n==4 || n==8||n==16||n==32||n==64 || n==128 ||n==256 ||n==512)
        return true;
        return isPowerOfTwo(n/2);
    }
};