int mySqrt(int x) {
    for(long long int i=0;i<50000;i++){
        if(i*i==x||(i*i<x&&(i+1)*(i+1)>x)){
            return i;
            break;
        }
    }
    return 0;
}