class Solution {
public:
    int findComplement(int num) {
        long long k=2;
        while(k<=num){
            k*=2;
        }
        return k-num-1;
    }
};