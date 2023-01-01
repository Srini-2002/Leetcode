int removeElement(int* nums, int numsSize, int val){   
    int j=0;
    int* temp =(int*)malloc((sizeof(int)*numsSize));
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=val){
            temp[j]=nums[i];
            j++;
        }
    }
    for(int i=0;i<numsSize;i++)
    {
        nums[i]=temp[i];
    }
    return j;
}