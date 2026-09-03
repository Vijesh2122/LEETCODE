int maximumCount(int* nums, int numsSize) {
    long long int i,j,a,b;
    a=0;
    b=0;
    for(i=0;i<numsSize && nums[i]<0;i++){
        a=a+1;
    }
    for(j=numsSize-1; j>=0 && nums[j]>0 ;j--){
        b=b+1;
    }
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}