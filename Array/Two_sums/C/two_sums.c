#include <stdio.h>
#include <stdlib.h>
/* link to the problem : https://leetcode.com/problems/two-sum/ */

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int *out = malloc(sizeof(int) * 2);
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i+1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                out[0] = i;
                out[1] = j;
                return (out);
            }
        }
    }
    return (out);
}

#ifdef TESTING

int main(void)
{
    int tab[4] = {1, 2, 3, 4};
    int target = 3;
    int *returnSize;
    returnSize = malloc(sizeof(int));
    int *result = twoSum(tab, 4, target, returnSize);
    printf("Indices of the numbers that add up to the target value: %d", result[0], result[1]);
    return (0);
}

#endif