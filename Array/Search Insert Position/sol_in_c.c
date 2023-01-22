/* https://leetcode.com/problems/search-insert-position/ */

/* Source to understand some notion :
https://stackoverflow.com/questions/2307283/what-does-olog-n-mean-exactly
*/


/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.
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