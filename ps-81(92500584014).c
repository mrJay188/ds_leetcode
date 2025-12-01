bool search(int* nums, int numsSize, int target) {

    bool result = false;
    for (int i=0; i < numsSize; i++){
        if (nums[i] == target){
            result = true;
            break;
        }
    }
    return result;
    
}
