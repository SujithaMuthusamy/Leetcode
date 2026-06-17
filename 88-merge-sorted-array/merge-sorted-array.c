void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int merged[n+m];
    int k=0;
    for(int i=0;i<m;i++){
        merged[k++]=nums1[i];
    }
    for(int j=0;j<n;j++){
        merged[k++]=nums2[j];
    }
    for(int i=0;i<m+n-1;i++){
        for(int j=i+1;j<m+n;j++){
            if(merged[i]>merged[j]){
                int temp=merged[i];
                merged[i]=merged[j];
                merged[j]=temp;
            }
        }
    }
    for(int i=0;i<m+n;i++){
        nums1[i]=merged[i];
    }
}