int mySqrt(int x) {
    long long int n=1;
    long long int t=x;
    while(t!=0){
       n=n*2;
       t=t/10; 
    }
    for(long long int i=(x/n+1);i>=0;i--){
        if(i*i==x||(i*i<x&&(i+1)*(i+1)>x)){
            return i;
            break;
        }
    }
    return 0;
}