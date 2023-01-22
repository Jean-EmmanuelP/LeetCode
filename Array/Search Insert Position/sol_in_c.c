/* https://leetcode.com/problems/search-insert-position/ */

/* Source to understand some notion :
https://stackoverflow.com/questions/2307283/what-does-olog-n-mean-exactly
*/


/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.
*/

int searchInsert(int* nums, int numsSize, int target){
    int number_before = 0, is_on = 1;
    int number_after = 0;
    while (number_before < numsSize)
    {
        if (nums[0] > target)
            return (0);
        if (number_before <= numsSize - 2)
            number_after = number_before + 1;
        else
            is_on = 0;
        if (nums[number_before] == target)
            return (number_before);
        else if (is_on == 1 && nums[number_before] < target && nums[number_after] > target)
            return (number_after);
        else if (nums[number_before] + 1 == target)
            return (number_before + 1);
        else if (nums[number_before] - 1 == target)
        {
            if (number_before == 0)
                return (0);
            return (number_before - 1);
        }
        number_before++;
    }
    return (numsSize);
}

/*

To solve this problem, I just 

*/