class Solution {
public:
    int bitwiseComplement(int n) {
        int k=2;
        while(k<=n){
            k=k*2;
        }
        return k-n-1;
    }
};