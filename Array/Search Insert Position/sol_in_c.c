/* https://leetcode.com/problems/search-insert-position/ */

/* Source to understand some notion :
https://stackoverflow.com/questions/2307283/what-does-olog-n-mean-exactly
*/
/*

*/
int searchInsert(int* nums, int numsSize, int target){
    for (int i = 0; i <= numsSize - 2; i++)
    {
        if (nums[i] == target)
            return (i);
        else if (nums[i] + 1 == target)
            return (i + 1);
    }
    return (numsSize);
}