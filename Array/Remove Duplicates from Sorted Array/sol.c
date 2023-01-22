/*https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/*/

int removeElement(int* nums, int numsSize, int val){
    int r = 0, w = 0;
    while (r < numsSize)
    {
        if (nums[r] == val)
        {
            r++;
        }
        else
        {
            nums[w] = nums[r];
            w++;
            r++;
        }
    }
    return (w);
}