void shift(int* nums,int numsSize,int start){
    for(int i=start;i<numsSize-1;i++)
        nums[i]=nums[i+1];
}

int removeDuplicates(int* nums, int numsSize){
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]==nums[j]){
                shift(nums,numsSize,j);
                numsSize--;
                j--;    
            }
        }
    }
    return numsSize;
}