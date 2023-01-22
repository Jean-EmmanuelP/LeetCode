/*https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/*/

int removeDuplicates(int* nums, int numsSize){
    int k = 1, i = 1;
    while (i < numsSize)
    {
        if (nums[i] == nums[i-1])
            i++;
        else
        {
            nums[k] = nums[i];
            k++;
            i++;
        }
    }
    return (k);
}