int removeElement(int* nums, int numsSize, int val) {
    int k=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=val){
            int temp=nums[i];
            nums[i]=nums[k];
            nums[k]=temp;
            k++;
        }
    }
    return k;
}
