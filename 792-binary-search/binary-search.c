int search(int* nums, int numsSize, int target) {
    int i,found=-1;
    int low=0;
    int high=numsSize-1;
    int mid;
    while(high>=low){
        mid=(low+high)/2;
        if(nums[mid]>target){
          high=mid-1;
}
        else if(nums[mid]<target){
            low=mid+1;
        }
        else{
            found=0;
            break;
        }
    }
    if(found==0)
    return mid;
    else
    return found;
}