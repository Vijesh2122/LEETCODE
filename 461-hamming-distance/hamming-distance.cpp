class Solution {
public:
    int hammingDistance(int x, int y) {
        vector <int> a(32);
        vector <int> b(32);
int i;
int c=0;
        for(i=31;i>=0;i--){
            a[i]=x%2;
            x=x/2;
        }
       for(i=31;i>=0;i--){
            b[i]=y%2;
            y=y/2;
        }
        for(i=0;i<32;i++){
            if(a[i]!=b[i]){
            c++;
            }
        }
        return c;


    }
};