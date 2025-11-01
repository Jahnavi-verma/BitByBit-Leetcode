void rotate(int* nums, int numsSize, int k) {
    int i;
    int array[numsSize];
    for (i=0;i<numsSize;i++){
        array[(i+k)%numsSize]=nums[i];
    }
    for (i=0;i<numsSize;i++){
        nums[i]=array[i];
    }
}
