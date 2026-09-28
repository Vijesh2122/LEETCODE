class Solution {
public:
    int reverseBits(int n) {
        __int128 k=0;
        for(int i=0;i<32;i++){
            k=k*10 + n%2;
            n=n/2;

 }
 int j=0;
 int a=0;
 while(k!=0){
    a=a+(k%10)*pow(2,j);
    j++;

    k=k/10;
 }
 return a;
    }
};