class Solution {
public:
    int findClosest(int x, int y, int z) {
        int v1=abs(z-x);
        int v2=abs(z-y);
        if(v1>v2){
            return 2;
        }
        if(v2>v1){
            return 1;
        }
       return 0;
        
    }
};