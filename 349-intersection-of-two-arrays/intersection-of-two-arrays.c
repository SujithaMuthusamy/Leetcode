
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int *ans = (int *)malloc((nums1Size < nums2Size ? nums1Size : nums2Size) * sizeof(int));
    int ansSize=0;
    int k;
    for(int i=0;i<nums1Size;i++){
        for(int j=0;j<nums2Size;j++){
            if(nums1[i]==nums2[j]){
                for(k=0;k<ansSize;k++){
                    if(ans[k]==nums1[i]){
                        break;
                    }
                }
                if(k==ansSize){
                    ans[ansSize]=nums1[i];
                    ansSize++;
                    }
                    break;
                }
            }
    }
            *returnSize=ansSize;
            return ans;
    }
        
    

    
