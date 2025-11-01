int countValidSelections(int* nums, int numsSize) {
   int curr=0;
   int curr1=0;
   int count=0;
   int n = numsSize;
   //chose curr
   for(int i=0;i<n;i++){
    if (nums[i]==0){
        curr=0;
        curr1=0;
        for(int j=0;j<i;j++){
            curr= curr + nums[j];
        }
        for(int k=i+1;k<n;k++){
            curr1= curr1 +nums[k];
        }
        if (curr==curr1 ){
            count=count+2;
        }
        if (curr-curr1==1 || curr1-curr==1){
            count=count+1;
        }
    }
   } 
    return count;
}
