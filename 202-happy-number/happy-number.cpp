class Solution {
public:vector<int>v;
    bool isHappy(int n) {
        int x=0;
        int temp=n;
        
        while(n!=0){ 
       
            x=x+(n%10)*(n%10);
            n=n/10;
        }
        
         v.push_back(temp);

            temp=x;
        if(x==1){
            return true;
        }
        else if(binary_search(v.begin(),v.end(),x)){
            return false;
        }
        else{
            return isHappy(x);
        }

        return 0;
    }
};